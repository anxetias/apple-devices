// name: FUN_100403088
// address: 100403088

void FUN_100403088(long param_1)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_b70 [48];
  int local_b40 [20];
  undefined1 local_af0 [1056];
  undefined4 local_6d0 [2];
  undefined1 *local_6c8;
  undefined8 local_6b8;
  undefined1 local_6b0 [64];
  uint local_670;
  undefined1 local_66c;
  undefined1 local_66b;
  undefined1 local_668 [1056];
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_6d0,0x688);
  ___bzero(local_b40,0x470);
  FUN_1001ceabd(local_b70,0,FUN_100403354,param_1,0,0);
  local_6d0[0] = 3;
  local_6b8 = *(undefined8 *)(param_1 + 0xae8);
  local_6c8 = local_b70;
  FUN_1001dfc9d(param_1 + 0xaf0,local_6b0);
  local_670 = (uint)*(ushort *)(param_1 + 0xad8);
  local_66c = *(undefined1 *)(param_1 + 0xada);
  local_66b = 1;
  _memcpy(local_668,(void *)(param_1 + 0x98),0x420);
  FUN_1001e1c39(param_1 + 0x4b8,local_248);
  iVar3 = (**(code **)(**(long **)(param_1 + 0xb30) + 0x1e0))
                    (*(long **)(param_1 + 0xb30),*(undefined8 *)(param_1 + 0xb40),local_6d0,
                     param_1 + 0xb48,local_b40);
  if (iVar3 == -0x80) goto LAB_100403286;
  if (iVar3 == 0) {
    iVar3 = local_b40[0];
    if (local_b40[0] == -0x80) goto LAB_100403286;
    if (local_b40[0] == 0) {
      pvVar1 = (void *)(param_1 + 0x6b8);
      _memcpy(pvVar1,local_af0,0x420);
      cVar2 = FUN_10017cbd0(pvVar1);
      if (cVar2 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "JRFileSpecIsValid(&mDestFileSpec)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar3 = 0;
      if (*(char *)(param_1 + 0xadc) == '\x01') {
        FUN_100186d13(pvVar1,1);
      }
      goto LAB_100403286;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_100403286;
    local_3a = (char *)CONCAT44(local_3a._4_4_,local_b40[0]);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 == '\0') goto LAB_100403286;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
  }
  local_3c = 0x400;
  local_44 = "Assertion failure";
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
LAB_100403286:
  *(int *)(param_1 + 0xb7c) = iVar3;
  FUN_1001b16d1(*(undefined4 *)(param_1 + 0xb84));
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

