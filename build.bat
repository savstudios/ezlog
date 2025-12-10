@echo off

set files_cpp=app/main.cpp core/log/log.cpp
set files_h=core
set build_name=EZLOG_TEST

g++ %files_cpp% -I%files_h% -o build/%build_name%

start build/%build_name%