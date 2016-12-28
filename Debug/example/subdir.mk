################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../example/queueSimpleExam.c 

OBJS += \
./example/queueSimpleExam.o 

C_DEPS += \
./example/queueSimpleExam.d 


# Each subdirectory must supply rules for building sources it contributes
example/%.o: ../example/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


