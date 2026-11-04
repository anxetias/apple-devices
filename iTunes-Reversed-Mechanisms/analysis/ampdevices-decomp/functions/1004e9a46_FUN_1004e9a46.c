// name: FUN_1004e9a46
// address: 1004e9a46

/* WARNING: Type propagation algorithm not settling */

int FUN_1004e9a46(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  char local_2a0 [48];
  undefined4 local_270;
  int local_24c [2];
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_24c[0] = 0x3f3f3f3f;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "JRFileSpecIsValid(&location->spec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0x3f3f3f3f;
  }
  else {
    iVar2 = FUN_10017d477(param_1,local_2a0,&local_228);
    iVar5 = 0x3f3f3f3f;
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (local_2a0[0] == '\0') {
          local_24c[0] = FUN_1003aea86(local_270,&local_228);
          iVar5 = local_24c[0];
          if (local_24c[0] != 0x3f3f3f3f) goto LAB_1004e9b60;
        }
        uVar3 = FUN_1001e21dd(&local_228);
        iVar2 = FUN_100466aac("BUPEBUPEBUPEOOBIoobioobi FDP FDP FDP GPI gpi gpi API api api",
                              local_270,uVar3,local_24c,0,0xf);
        iVar5 = 0x3f3f3f3f;
        if (iVar2 == 0) {
          iVar5 = local_24c[0];
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_24c[1] = 0x8220202;
          local_244 = "Assertion failure";
          local_23c = 0x400;
          local_23a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_24c + 1,0x12);
        }
      }
    }
  }
LAB_1004e9b60:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

