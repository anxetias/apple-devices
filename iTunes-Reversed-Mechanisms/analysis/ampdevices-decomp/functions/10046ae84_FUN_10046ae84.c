// name: FUN_10046ae84
// address: 10046ae84

int FUN_10046ae84(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  int local_3a;
  code *local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1004cd50f(400,0xf);
  if (iVar2 == -0x80) goto LAB_10046b367;
  if (iVar2 == 0) {
    iVar2 = FUN_1003b9828(DAT_1008c76a0,FUN_1004cd69c,&DAT_1008bf920,0);
    uVar3 = DAT_1008c76a0;
    if (iVar2 == -0x80) goto LAB_10046b367;
    if (iVar2 == 0) {
      FUN_1001c62d9(&local_48,0x28);
      local_48 = (undefined4)uVar3;
      uStack_44 = (undefined4)((ulong)uVar3 >> 0x20);
      local_40 = 1;
      local_30 = FUN_1005ea766;
      local_28 = uVar3;
      iVar2 = FUN_1003b9050(&local_48);
      uVar3 = DAT_1008c76a0;
      if (iVar2 == -0x80) goto LAB_10046b367;
      if (iVar2 == 0) {
        FUN_1001c62d9(&local_48,0x28);
        local_48 = (undefined4)uVar3;
        uStack_44 = (undefined4)((ulong)uVar3 >> 0x20);
        local_40 = 1;
        local_30 = FUN_100500c32;
        local_28 = uVar3;
        iVar2 = FUN_1003b9050(&local_48);
        if (iVar2 == -0x80) goto LAB_10046b367;
        if (iVar2 == 0) {
          iVar2 = FUN_1003b9828(DAT_1008c76a0,FUN_10028c047,0,1);
          if (iVar2 == -0x80) goto LAB_10046b367;
          if (iVar2 == 0) {
            iVar2 = FUN_1003b9828(DAT_1008c76a0,FUN_10055aa22,0,1);
            if (iVar2 == -0x80) goto LAB_10046b367;
            if (iVar2 == 0) {
              iVar2 = FUN_1003b9828(DAT_1008c76a0,FUN_1003e50f8,0,1);
              if (iVar2 == -0x80) goto LAB_10046b367;
              if (iVar2 == 0) {
                iVar2 = FUN_1003b9828(DAT_1008c76a0,FUN_10021e1f7,0,1);
                if (iVar2 == -0x80) goto LAB_10046b367;
                if (iVar2 == 0) {
                  iVar2 = FUN_1003b9828(DAT_1008c76a0,FUN_100234870,0,1);
                  if (iVar2 == -0x80) goto LAB_10046b367;
                  if (iVar2 == 0) {
                    iVar2 = 0;
                    if (DAT_1008c77a0 == '\0') {
                      DAT_1008c77a0 = '\x01';
                      FUN_10043dc2e();
                    }
                    goto LAB_10046b367;
                  }
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                }
              }
              else {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_3c = 0x400;
    local_40 = 1;
    uStack_44 = 0x7a0a90;
    local_48 = 0x8220202;
    local_3a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  }
LAB_10046b367:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

