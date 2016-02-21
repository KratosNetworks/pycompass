from Compass import Compass

cc = Compass.connect('localhost', 'admin', 'newpoint')
Compass.setpoint(cc, "demodev1", "fi1", 2)

exit(0)
