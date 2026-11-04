// name: FUN_10040b4d2
// address: 10040b4d2

int FUN_10040b4d2(long param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 local_62;
  ulong local_60;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x84) != 0x646f5069) || ((*(byte *)(param_1 + 0x2d1a) & 0x20) == 0))
  goto LAB_10040b70f;
  FUN_1001c62d9(&local_78,0x38);
  local_78 = CONCAT22(local_78._2_2_,0xf00);
  iVar3 = FUN_1002f7c7e(param_1,0x74646774);
  if (iVar3 == -0x80) goto LAB_10040b70f;
  if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x400;
      uStack_6a = (undefined2)iVar3;
      uStack_68 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
    goto LAB_10040b70f;
  }
  uVar1 = CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70));
  iVar3 = 0;
  uVar8 = 0;
  if (local_60 <= uVar1) {
    uVar8 = uVar1 - local_60;
  }
  uVar4 = *(uint *)(param_1 + 0x2c08);
  if (uVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xc329;
      uStack_68 = 0x7c;
      uStack_66 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = *(uint *)(param_1 + 0x2c08);
  }
  if (*(ulong *)(param_2 + 0x488) <= uVar8 / uVar4) goto LAB_10040b70f;
  FUN_1001b7a44(local_88);
  if (*(int *)(param_2 + 0x38) == 0) {
LAB_10040b659:
    FUN_10017d520(&local_78,param_2 + 0x68);
    FUN_1001b80b2(local_88,&local_78);
  }
  else {
    lVar6 = FUN_10030252b(param_2 + 0x34);
    if (lVar6 == 0) goto LAB_10040b659;
    FUN_100476ac1(&local_78,*(undefined8 *)(lVar6 + 8));
    FUN_1001b80b2(local_88,&local_78);
  }
  FUN_1001b7a50(&local_78);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
  if (cVar2 != '\0') {
    uVar7 = FUN_1001b83ae(local_88);
    lVar6 = (ulong)*(uint *)(param_1 + 0x2c08) * *(long *)(param_2 + 0x488);
    local_78 = 0x8220302;
    uStack_74 = (undefined4)uVar7;
    local_70 = (undefined4)((ulong)uVar7 >> 0x20);
    uStack_6c = 0x800;
    uStack_6a = (undefined2)lVar6;
    uStack_68 = (undefined2)((ulong)lVar6 >> 0x10);
    uStack_66 = (undefined4)((ulong)lVar6 >> 0x20);
    local_62 = 0x800;
    local_60 = uVar8;
    __os_log_impl(0x100000000,uVar5,0x10,
                  "airtraffic> insufficient free space for \"%{public}s\" (%llu bytes required, %llu bytes available)"
                  ,&local_78,0x20);
  }
  FUN_1001b7a50(local_88);
  iVar3 = -0x22;
LAB_10040b70f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

