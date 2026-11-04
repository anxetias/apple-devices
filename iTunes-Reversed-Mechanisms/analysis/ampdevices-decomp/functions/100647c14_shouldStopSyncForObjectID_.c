// name: shouldStopSyncForObjectID:
// address: 100647c14

/* Function Stack Size: 0x14 bytes */

char AMPDevicesClientConnection::shouldStopSyncForObjectID_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (DAT_1008c3488,PTR_s_isProgressCancelledForObjectID__10088da60);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_1008c3488,PTR_s_isProgressStoppedForObjectID__10088da68,param_3);
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}

