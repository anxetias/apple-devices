// name: FUN_10031a150
// address: 10031a150

int FUN_10031a150(ulong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  byte local_89;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1002796f8(param_1,0);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x822;
      local_7a = "libraryPrefs != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    puVar5 = (undefined8 *)(lVar3 + 0xd0);
    lVar3 = FUN_1001a8610(puVar5);
    if (lVar3 == 0) {
      iVar2 = -0x78;
    }
    else {
      iVar2 = FUN_100170286(*puVar5,param_2,0,&local_89,&local_88);
      if (iVar2 == 0) {
        iVar2 = FUN_10017d477(param_2,&local_88,0);
        if ((iVar2 == 0) && (iVar2 = -0x78, (char)local_88 != '\0')) {
          cVar1 = FUN_100193976(param_2);
          if (cVar1 == '\0') {
            if (local_89 == 0) {
              cVar1 = FUN_10017049e(*puVar5);
              if (cVar1 == '\0') {
                iVar2 = 0;
                if ((local_89 & 1) == 0) goto LAB_10031a246;
              }
              else {
                local_89 = 1;
              }
            }
            uVar4 = FUN_1001703de(0,param_2,0);
            FUN_1001a78d6(&local_88,uVar4);
            lVar3 = FUN_1001a8610(&local_88);
            if (lVar3 != 0) {
              FUN_1001a7ad8(puVar5,&local_88);
              FUN_100279998(param_1 & 0xff);
            }
            FUN_1001a85d4(&local_88);
            iVar2 = 0;
          }
        }
      }
    }
  }
LAB_10031a246:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

