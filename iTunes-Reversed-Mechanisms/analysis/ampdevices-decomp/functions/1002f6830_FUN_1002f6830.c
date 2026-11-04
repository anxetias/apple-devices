// name: FUN_1002f6830
// address: 1002f6830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002f6830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 undefined4 param_6,long param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 local_130 [2];
  undefined4 local_128;
  uint local_124;
  undefined8 local_120;
  undefined1 local_118 [28];
  undefined4 local_fc;
  double local_f0;
  int local_e8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  int local_9a;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8 = 0;
  local_c8 = param_4;
  local_bc = param_6;
  local_b0 = param_3;
  if (param_7 != 0) {
    FUN_1001e9de0();
  }
  iVar2 = FUN_1003cfb06(param_2,local_b0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x400;
      local_7a = iVar2;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
    }
  }
  FUN_1001c62d9(local_118,0x28);
  FUN_10015d7ff(_DAT_1007438d4,1,0x10,0xc,local_118);
  FUN_1001c62d9(&local_f0,0x28);
  if (param_5 == 0x6c70636d) {
    FUN_10015d7ff((float)*(uint *)(param_1 + 8),1,0x10,0xc,&local_f0);
  }
  else {
    local_f0 = (double)*(uint *)(param_1 + 8);
    local_d4 = local_fc;
    local_e8 = param_5;
  }
  iVar2 = FUN_1003cfb06(param_2,local_b0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = "Assertion failure";
      local_7c = 0x400;
      local_7a = iVar2;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
    }
  }
  iVar2 = FUN_10018e4a1(param_2,&local_88);
  if (iVar2 == -0x80) goto LAB_1002f6ca0;
  if (iVar2 == 0) {
    uVar4 = FUN_1001e5b1d(local_b0);
    iVar2 = _ExtAudioFileCreateNew(&local_88,uVar4,local_bc,&local_f0,0,&local_b8);
    FUN_10017060f(uVar4);
    if (iVar2 == -0x80) goto LAB_1002f6ca0;
    if (iVar2 == 0) {
      iVar2 = _ExtAudioFileSetProperty(local_b8,0x63666d74,0x28,local_118);
      uVar4 = local_c8;
      if (iVar2 == -0x80) goto LAB_1002f6ca0;
      if (iVar2 == 0) {
        local_130[0] = 1;
        local_128 = 1;
        uVar3 = FUN_100170ef7(local_c8);
        local_124 = uVar3;
        local_120 = FUN_100170f3b(uVar4);
        iVar2 = _ExtAudioFileWrite(local_b8,uVar3 >> 1,local_130);
        if (iVar2 == -0x80) goto LAB_1002f6ca0;
        if (iVar2 == 0) {
          iVar2 = FUN_10017ecc9(param_2,local_b0,param_8,0);
          goto LAB_1002f6ca0;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
  }
  if (cVar1 != '\0') {
    local_9c = 0x400;
    local_a4 = "Assertion failure";
    local_a8 = 0x8220202;
    local_9a = iVar2;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
  }
LAB_1002f6ca0:
  if (local_b8 != 0) {
    _ExtAudioFileDispose();
  }
  if (param_7 != 0) {
    FUN_1001e9eb9(param_7);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

