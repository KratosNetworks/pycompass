from Compass import Compass

cc = Compass.connect('localhost', 'admin', 'newpoint')
print(cc)

#alarms = cc.getActiveAlarms();

#for alarm in alarms:
#    print('last_alarm:, %s\n' % alarm.last_alarm)
#    print('devdesc: %s\n' % alarm.devdesc)
#    print('tms_sec: %s\n' % alarm.tms_sec)
#    print('inhib: %s\n' % alarm.inhib)
#    print('subdev: %s\n' % alarm.subdev)
#    print('groupname: %s\n' % alarm.groupname)
#    print('pntname: %s\n' % alarm.pntname)
#    print('alarm: %s\n' % alarm.alarm)
#    print('tms_usec: %s\n' % alarm.tms_usec)
#    print('descript: %s\n' % alarm.descript)
#    print('dqconf: %s\n' % alarm.dqconf)

exit(0)
