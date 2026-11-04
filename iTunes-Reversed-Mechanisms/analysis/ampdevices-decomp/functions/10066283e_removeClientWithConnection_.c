// name: removeClientWithConnection:
// address: 10066283e

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientBroadcaster::removeClientWithConnection_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  if (lVar1 != 0) {
    lVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_1);
    _objc_sync_enter(lVar2);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(lVar2 + 0x10),PTR_s_removeObject__10088de70,lVar1);
    _objc_sync_exit(lVar2);
    (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar1);
  return;
}

