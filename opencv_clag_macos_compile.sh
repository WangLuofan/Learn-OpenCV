#!/bin/bash

if [ $# -lt 1 ] 
then
	echo "usage:./compile <FILENAME>"
	exit 0;
fi

filenamelen=${#1}
fileextension=".cpp"
substr=${1:$filenamelen-4:4}

if [ $substr = $fileextension ]
then
	subfilename=${1:0:$filenamelen-4}
	filename=$1
	output=$subfilename".out"
else
	filename=$1".cpp"
	output=$1".out"
fi

clang++ -x c++ -arch x86_64 -std=gnu++11 -stdlib=libc++ -MTd -L/usr/local/lib -I/usr/local/include $filename -o $output -Xlinker "-lopencv_contrib" -Xlinker "-lopencv_calib3d" -Xlinker "-lopencv_core" -Xlinker "-lopencv_features2d" -Xlinker "-lopencv_flann" -Xlinker "-lopencv_gpu" -Xlinker "-lopencv_highgui" -Xlinker "-lopencv_imgproc" -Xlinker "-lopencv_legacy" -Xlinker "-lopencv_ml" -Xlinker "-lopencv_nonfree" -Xlinker "-lopencv_objdetect" -Xlinker "-lopencv_ocl" -Xlinker "-lopencv_photo" -Xlinker "-lopencv_stitching" -Xlinker "-lopencv_superres" -Xlinker "-lopencv_video" -Xlinker "-lopencv_videostab"
