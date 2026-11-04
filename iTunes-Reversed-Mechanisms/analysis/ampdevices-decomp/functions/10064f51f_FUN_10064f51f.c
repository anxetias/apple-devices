// name: FUN_10064f51f
// address: 10064f51f

void FUN_10064f51f(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_48;
  char local_47;
  char local_46;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  iVar2 = FUN_1005028fb(param_2,&local_48);
  if (iVar2 == 0) {
    uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___AMPDeviceAutoFillPrefs_10082b9a0);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setAutoFillHigherRatedSongs__10088dc18,(int)local_48);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setAutoFillRandomSongs__10088dc20,(int)local_47);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setAutoFillReplaceSongs__10088dc28,(int)local_46);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setAutoFillSourcePlaylistID__10088dc30,local_40);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setAutoFillReserveFreeBytes__10088dc38,local_38);
    uVar3 = 0;
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setAutoFillTotalDiskBytes__10088dc40,local_30);
  }
  else {
    uVar4 = 0;
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar2)
    ;
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar4,uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)puVar1)(uVar4);
  return;
}

