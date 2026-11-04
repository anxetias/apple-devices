// name: FUN_10064fa01
// address: 10064fa01

void FUN_10064fa01(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoFillHigherRatedSongs_10088dc48);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoFillRandomSongs_10088dc50);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoFillReplaceSongs_10088dc58);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoFillSourcePlaylistID_10088dc60);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoFillReserveFreeBytes_10088dc68);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoFillTotalDiskBytes_10088dc70);
  iVar1 = FUN_100502a46(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar1)
    ;
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

