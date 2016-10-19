OBJS = RobotPart.o Torso.o Head.o Arm.o Locomotor.o Battery.o view.o controller.o RobotModel.o TrackingParts.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

executable : $(OBJS)
		$(CC) $(LFLAGS) $(OBJS)

RobotPart.o : RobotPart.cpp RobotPart.h
		$(CC) $(CFLAGS) RobotPart.cpp

Torso.o : Torso.cpp Torso.h
		$(CC) $(CFLAGS) Torso.cpp

Head.o : Head.cpp Head.h
		$(CC) $(CFLAGS) Head.cpp

Arm.o : Arm.cpp Arm.h
		$(CC) $(CFLAGS) Arm.cpp

Locomotor.o : Locomotor.cpp Locomotor.h
		$(CC) $(CFLAGS) Locomotor.cpp

Battery.o : Battery.cpp Battery.h
		$(CC) $(CFLAGS) Battery.cpp

view.o : view.cpp view.h
		$(CC) $(CFLAGS) view.cpp

controller.o : controller.cpp controller.h Torso.h view.h
		$(CC) $(CFLAGS) controller.cpp

RobotModel.o : RobotModel.cpp RobotModel.h
		$(CC) $(CFLAGS) RobotModel.cpp

TrackingParts.o : TrackingParts.cpp TrackingParts.h
		$(CC) $(CFLAGS) TrackingParts.cpp

clean:
	\rm *.o a.out