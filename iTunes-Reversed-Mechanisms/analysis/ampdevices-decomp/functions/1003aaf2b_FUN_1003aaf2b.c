// name: FUN_1003aaf2b
// address: 1003aaf2b

void FUN_1003aaf2b(undefined8 param_1,byte *param_2,long param_3,char param_4,undefined1 param_5,
                  long param_6)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_78;
  long local_70;
  uint local_64;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0;
  local_78 = 0;
  local_64 = 0;
  local_70 = 0;
  if (param_3 != 0) {
    local_64 = (uint)*param_2;
    param_2 = param_2 + 1;
    uVar7 = param_3 - 1;
  }
  lVar2 = *(long *)(param_6 + 0x18);
  FUN_1004279a4(param_1,param_4,param_2,uVar7 & 0xffffffff,&local_70);
  if ((byte)(param_4 - 1U) < 2) {
    lVar5 = FUN_1001e0710(param_2,uVar7,&local_78,3,0);
    if (lVar5 == 0) {
      lVar5 = FUN_1001e0710(param_2,uVar7,&local_78,2,0);
      lVar5 = lVar5 + 1;
    }
    else {
      lVar5 = lVar5 + 2;
    }
  }
  else {
    lVar5 = 0;
  }
  if ((param_4 == '\x03') || (param_4 == '\0')) {
    lVar5 = FUN_1001e0710(param_2,uVar7,&local_78,1,0);
  }
  lVar8 = uVar7 - lVar5;
  if (lVar8 != 0) {
    *(int *)(param_6 + 0x10) = *(int *)(param_6 + 0x10) + (int)lVar8;
    *(short *)(param_6 + 0xc) = *(short *)(param_6 + 0xc) + 1;
    if (lVar2 != 0) {
      iVar4 = FUN_1005d1e6e(param_2 + lVar5,lVar8,param_5,&local_60);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          local_58 = 0x44;
          FUN_1005d36e5(local_60,0x61777372);
          FUN_1005d36e5(local_60,0x61777470,&local_64);
          FUN_1005d36e5(local_60,0x61776465,&local_70);
          local_70 = 0;
          FUN_1005d3b11(lVar2,0x7fffffff,local_60);
          if (local_60 != 0) {
            LOCK();
            piVar1 = (int *)(local_60 + 4);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_1005d25cb();
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = iVar4;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
    }
  }
  if (local_70 != 0) {
    FUN_1001c64c1();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

