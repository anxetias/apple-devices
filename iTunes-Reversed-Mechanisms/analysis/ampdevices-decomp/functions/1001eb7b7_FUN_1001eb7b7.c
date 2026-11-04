// name: FUN_1001eb7b7
// address: 1001eb7b7

uint FUN_1001eb7b7(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_b0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  char local_98 [40];
  undefined1 local_70 [80];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = 0;
  iVar2 = _LSFindApplicationForInfo(0,param_1,0,local_70,&local_b0);
  if (local_b0 == 0 || iVar2 != 0) goto LAB_1001eb8f6;
  uVar3 = 0;
  lVar4 = FUN_100174c64(0);
  if (lVar4 != 0) {
    lVar5 = _CFBundleGetValueForInfoDictionaryKey(lVar4,&cf_CFBundleShortVersionString);
    if (lVar5 == 0) {
LAB_1001eb8df:
      uVar3 = 0;
    }
    else {
      cVar1 = FUN_10017393c(lVar5,local_98,0x20,0x600);
      if (cVar1 == '\0') goto LAB_1001eb8df;
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0;
      uVar3 = _sscanf(local_98,"%u.%u.%u");
      if ((uVar3 & 0xfffffffe) != 2) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          FUN_1006c3a5d(uVar6);
        }
        FUN_1001782e9(0,0);
      }
      uVar3 = local_9c & 0xf | (local_a0 & 0xf) << 4 | (local_a4 & 0xff) << 8;
    }
    FUN_10017060f(lVar4);
  }
  FUN_10017060f(local_b0);
LAB_1001eb8f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

