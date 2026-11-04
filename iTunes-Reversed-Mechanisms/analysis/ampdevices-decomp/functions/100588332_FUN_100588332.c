// name: FUN_100588332
// address: 100588332

int FUN_100588332(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong local_478;
  long local_470;
  uint local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_470 = 0;
  cVar2 = FUN_10017cbd0();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_43a = "JRFileSpecIsValid(inFileSpec)";
LAB_100588640:
      local_43c = 0x822;
      local_444 = "Assertion failure";
      local_448 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      FUN_1001c62d9(param_2,0x90);
      iVar3 = FUN_10058879d(param_1,&local_448);
      if (iVar3 == -0x80) goto LAB_10058852d;
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        goto joined_r0x000100588527;
      }
      iVar4 = FUN_10017cc65(&local_448,0x64617461,1,&local_470);
      iVar3 = 0;
      if (iVar4 == -0x80) goto LAB_10058853e;
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x400;
          local_45a = iVar4;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_468,0x12);
        }
        goto LAB_10058853e;
      }
      iVar3 = FUN_10017ce92(local_470,&local_478);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_10017d186(local_470,param_2,0x90,0,0);
          if (iVar3 == -0x80) goto LAB_10058852d;
          if (iVar3 == 0) {
            FUN_100529c62(param_2);
            iVar3 = FUN_1005889cf(*param_2,0x6864666d);
            if (iVar3 == 0) {
              if (local_478 == (uint)param_2[2]) {
                uVar1 = param_2[1];
                iVar3 = 0;
                if ((ulong)uVar1 < 0x90) {
                  FUN_1001c62d9((long)param_2 + (ulong)uVar1,0x90 - uVar1);
                }
              }
              else {
                FUN_1005881c4("File size: Header mismatch!");
                uVar5 = FUN_100588160();
                cVar2 = _os_log_type_enabled(uVar5,0);
                iVar3 = -0x51d;
                if (cVar2 != '\0') {
                  local_468 = local_468 & 0xffff0000;
                  __os_log_impl(0x100000000,uVar5,0,"File size: Header mismatch!",&local_468,2);
                }
              }
              goto LAB_10058852d;
            }
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
        }
joined_r0x000100588527:
        if (cVar2 != '\0') {
          local_45c = 0x400;
          local_464 = "Assertion failure";
          local_468 = 0x8220202;
          local_45a = iVar3;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_468,0x12);
        }
      }
LAB_10058852d:
      if (local_470 != 0) {
        FUN_10017cdfb();
      }
      goto LAB_10058853e;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_43a = "outFileHeader != nullptr";
      goto LAB_100588640;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10058853e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

