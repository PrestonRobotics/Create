#include <kipr/botball.h>

int main()
{
    printf("Hello World\n") ;
    create_connect() ;
    wait_for_light(2) ;
    shut_down_in(119) ; 						// Waits for light in specified port # of milliseconds
    
       create_drive_direct(0,0) ;					// Drives the create at the left and right motor speeds (in mm per sec)
    msleep(1500) ;								// Waits specified number of milliseconds before next line
	
    create_drive_direct(200, 200) ;				// Moves forward at ... mm/sec
    msleep(1500) ;
    
    create_drive_direct(200, -200) ;			// Create will turn right
    msleep(1000) ;
    
    create_drive_direct(200, 200) ;
    msleep(1000) ;
    
    Create_drive_direct(-200, 200)
    msleep(1000)
            create_drive_direct(-200, 200) ;
    msleep(1500) ;
    
    create_drive_direct(200, 200) ;
    msleep(1000) ;
    
    create_drive_direct(-200, 200) ;
    msleep(1000) ;
    
    create_drive_direct(200, 200) ;
    msleep(1000)
    
    create_stop() ;								// Turns off the Create motors
    create_disconnect() ;						// Disconnects from the Create
    return 0;
    
}
