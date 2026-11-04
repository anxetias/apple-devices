// name: FUN_100168f04
// address: 100168f04

long FUN_100168f04(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = FUN_1001704bb();
  iVar2 = FUN_10015f36c(param_3);
  if (iVar2 == -1) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006769ca(uVar4);
    }
  }
  else {
    lVar5 = _CFAllocatorAllocate(uVar4,iVar2 + 1,0);
    if (lVar5 != 0) {
      uVar3 = FUN_10015f415(param_2,param_3,lVar5,iVar2);
      *(undefined1 *)(lVar5 + (ulong)uVar3) = 0;
      lVar6 = FUN_1001734f5(uVar4,lVar5,0x8000100,uVar4);
      if (lVar6 != 0) {
        return lVar6;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        FUN_1006768de(uVar7);
      }
      FUN_1001782e9(0,0);
      _CFAllocatorDeallocate(uVar4,lVar5);
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100676954(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

