// name: FUN_1004ff5a7
// address: 1004ff5a7

undefined1 FUN_1004ff5a7(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  if (*(char *)(param_1 + 0x359) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x6ac3) == '\0') {
    cVar2 = FUN_100171457(param_2,&cf_SyncDataClasses);
    if (cVar2 != '\0') {
      FUN_100171552(param_2,&cf_SyncDataClasses);
      return 1;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x15220);
    if (lVar1 != 0) {
      uVar4 = 0;
      uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (*(long *)(lVar1 + 0x20) != 0) {
        uVar4 = *(undefined1 *)(*(long *)(lVar1 + 0x20) + 0x48);
      }
      FUN_100168b0b(uVar3,&cf_Contacts,uVar4,1);
      if (*(long *)(lVar1 + 0x28) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined1 *)(*(long *)(lVar1 + 0x28) + 0x48);
      }
      FUN_100168b0b(uVar3,&cf_Calendars,uVar4,1);
      if (*(long *)(lVar1 + 0x30) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined1 *)(*(long *)(lVar1 + 0x30) + 0x48);
      }
      FUN_100168b0b(uVar3,&cf_Bookmarks,uVar4,1);
      if (*(long *)(lVar1 + 0x38) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined1 *)(*(long *)(lVar1 + 0x38) + 0x48);
      }
      FUN_100168b0b(uVar3,&cf_Notes,uVar4,1);
      FUN_100171502(param_2,&cf_SyncDataClasses,uVar3);
      FUN_10017060f(uVar3);
      return 1;
    }
  }
  return 0;
}

