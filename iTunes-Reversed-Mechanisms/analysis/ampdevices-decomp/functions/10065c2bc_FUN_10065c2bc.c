// name: FUN_10065c2bc
// address: 10065c2bc

void FUN_10065c2bc(long param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int local_1c;
  
  lVar2 = FUN_1005e9a2c();
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    for (lVar2 = *(long *)(lVar2 + 0x60); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x6878)) {
      if (*(int *)(lVar2 + 0x6884) == param_2) {
        uVar3 = FUN_1005e9a2c();
        cVar1 = FUN_1005e963c(uVar3,param_2,&local_1c);
        if (cVar1 != '\0') {
          param_2 = local_1c;
        }
        break;
      }
    }
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (&objc::class_t::AMPDevicesClientConnection,
             PTR_s_addSoftwareUpdateRestoreProgress_10088dd38,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),param_2);
  return;
}

