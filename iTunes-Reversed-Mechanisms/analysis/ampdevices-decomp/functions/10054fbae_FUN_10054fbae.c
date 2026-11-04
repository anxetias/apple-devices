// name: FUN_10054fbae
// address: 10054fbae

int FUN_10054fbae(long param_1,int param_2,undefined8 param_3,byte *param_4,uint *param_5,
                 undefined8 param_6,undefined4 param_7,undefined4 *param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "descriptor != nullptr";
LAB_10054fe15:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_5 == (uint *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "actDescriptorSize != nullptr";
      goto LAB_10054fe15;
    }
  }
  else {
    if (param_8 != (undefined4 *)0x0) {
      *param_5 = (uint)*param_4;
      *param_8 = 0;
      local_68 = param_6;
      if ((param_2 == 0x4d46494c) || (iVar2 = -4, param_2 == 0x46494c45)) {
        iVar2 = FUN_10054d680(param_2,param_3,0);
        if (iVar2 == 0) {
          iVar3 = FUN_100548d34(0,param_1,param_2,param_3,0,1);
          iVar2 = 0;
          if (iVar3 == 0) {
            iVar2 = 0;
            iVar3 = FUN_100549f1e(param_1,0,param_2,param_3,0,0,0);
            if (iVar3 == 0) {
              iVar2 = 0;
              iVar3 = FUN_1005d872c(param_1 + 0x710,0,0,&local_70);
              if (local_70 != 0 && iVar3 == 0) {
                iVar3 = FUN_1001c97e8(local_70,0x2d2d2d2d,"com.apple.iTunes",0x10,param_4 + 1,
                                      *param_4,&local_78);
                if (local_78 != 0 && iVar3 == 0) {
                  iVar3 = FUN_1001cad10(local_78,1,&local_59,local_68,param_7,param_8);
                  if ((iVar3 != -0x80) && (iVar3 != 0)) {
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                }
                FUN_1001c8d4b(local_70,0);
              }
            }
          }
        }
      }
      goto LAB_10054fe48;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "bufferFilled != nullptr";
      goto LAB_10054fe15;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10054fe48:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

