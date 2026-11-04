// name: FUN_100376ff5
// address: 100376ff5

int FUN_100376ff5(long param_1,undefined2 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined1 param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "refNum != ((JRFileRefNum) 0)";
LAB_10037725d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_4 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        iVar3 = FUN_1001ecfab(7,"AFC File I/O Thread",param_1 + 0x10,0);
        if (iVar3 == -0x80) goto LAB_100377156;
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_100377156;
        }
      }
      lVar4 = FUN_1001c6429(0xb0);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "taskParams != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x6c;
      }
      else {
        *(long *)(lVar4 + 0x60) = param_1;
        *(undefined1 *)(lVar4 + 0xa4) = param_9;
        *(undefined2 *)(lVar4 + 0x70) = param_2;
        *(undefined8 *)(lVar4 + 0x68) = param_3;
        *(long *)(lVar4 + 0x78) = param_4;
        *(undefined8 *)(lVar4 + 0x80) = param_5;
        *(undefined8 *)(lVar4 + 0x90) = param_6;
        *(undefined8 *)(lVar4 + 0x98) = param_7;
        *(undefined4 *)(lVar4 + 0xa0) = param_8;
        *(code **)(lVar4 + 0x40) = FUN_1003772da;
        *(long *)(lVar4 + 0x48) = lVar4;
        iVar2 = FUN_1001ecf95(*(undefined8 *)(param_1 + 0x10),lVar4);
        if (iVar2 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = 0;
          FUN_1003773f6(iVar2,param_4,param_5,0,param_6,param_7);
          FUN_1001c64c1(lVar4);
        }
      }
      goto LAB_100377156;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "buffer != nullptr";
      goto LAB_10037725d;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100377156:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

