// name: FUN_100314c1e
// address: 100314c1e

int FUN_100314c1e(int param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = (long *)FUN_1001c629e(0x2db0,&DAT_100711c6e);
  if (plVar4 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
    goto LAB_100314fc9;
  }
  FUN_1001c750a(plVar4);
  FUN_1001c75be(plVar4 + 6);
  *plVar4 = (long)&PTR_FUN_100853870;
  plVar4[6] = (long)&PTR_FUN_1008538b0;
  *(undefined4 *)(plVar4 + 0x10) = 0x74646174;
  *(int *)((long)plVar4 + 0x84) = param_1;
  uVar2 = FUN_1001ea5dc();
  *(undefined4 *)(plVar4 + 0x11) = uVar2;
  *(undefined4 *)((long)plVar4 + 0x8c) = 100;
  FUN_1003217de(plVar4 + 0x16,1,0);
  FUN_1003217de(plVar4 + 0xa4,4,0);
  FUN_1003217de(plVar4 + 0x132,8,0);
  FUN_1003217de(plVar4 + 0x1c0,2,0);
  FUN_1003217de(plVar4 + 0x24e,0x80,0);
  uVar5 = FUN_1001ea62b(0);
  FUN_1003217de(plVar4 + 0x2dc,0,uVar5);
  plVar4[0x376] = plVar4[0x376] & 0xffffffdbffffffffU | (ulong)(param_1 == 0x72767273) << 0x22;
  plVar4[0x380] = (long)FUN_1003218b8;
  plVar4[0x381] = 0;
  plVar4[0x4ae] = 0;
  plVar4[0x4af] = 0;
  plVar4[0x4b0] = 0;
  plVar4[0x4b1] = 0;
  *(undefined4 *)(plVar4 + 0x4b2) = 0x3f800000;
  plVar4[0x4b3] = 0;
  plVar4[0x4b4] = 0;
  plVar4[0x4b5] = 0;
  plVar4[0x4b6] = 0;
  *(undefined4 *)(plVar4 + 0x4b7) = 0x3f800000;
  plVar4[0x4b8] = 0;
  plVar4[0x4b9] = 0;
  plVar4[0x4ba] = 0;
  plVar4[0x4bb] = 0;
  *(undefined4 *)(plVar4 + 0x4bc) = 0x3f800000;
  plVar4[0x4bd] = 0;
  plVar4[0x4be] = 0;
  plVar4[0x4bf] = 0;
  plVar4[0x4c0] = 0;
  *(undefined4 *)(plVar4 + 0x4c1) = 0x3f800000;
  plVar4[0x4c2] = 0;
  plVar4[0x4c3] = 0;
  plVar4[0x4c4] = 0;
  plVar4[0x4c5] = 0;
  *(undefined4 *)(plVar4 + 0x4c6) = 0x3f800000;
  plVar4[0x4ca] = 0;
  plVar4[0x4cb] = 0;
  plVar4[0x4cc] = 0;
  plVar4[0x4cd] = 0;
  *(undefined4 *)(plVar4 + 0x4ce) = 0x3f800000;
  plVar4[0x4cf] = 0;
  plVar4[0x4d0] = 0;
  plVar4[0x4d1] = 0;
  plVar4[0x4d2] = 0;
  *(undefined4 *)(plVar4 + 0x4d3) = 0x3f800000;
  plVar4[0x4d4] = 0;
  plVar4[0x4d5] = 0;
  plVar4[0x4d6] = 0;
  plVar4[0x4d7] = 0;
  *(undefined4 *)(plVar4 + 0x4d8) = 0x3f800000;
  plVar4[0x4d9] = 0;
  plVar4[0x4da] = 0;
  plVar4[0x4db] = 0;
  plVar4[0x4dc] = 0;
  *(undefined4 *)(plVar4 + 0x4dd) = 0x3f800000;
  plVar4[0x4e1] = 0;
  plVar4[0x4e2] = 0;
  plVar4[0x4e0] = (long)(plVar4 + 0x4e1);
  plVar4[0x4e4] = 0;
  plVar4[0x4e5] = 0;
  plVar4[0x4e3] = (long)(plVar4 + 0x4e4);
  FUN_1001b7a44(plVar4 + 0x4e8);
  plVar4[0x4eb] = 0;
  plVar4[0x4ec] = 0;
  plVar4[0x4ee] = 0;
  plVar4[0x4ef] = 0;
  plVar4[0x4ed] = (long)(plVar4 + 0x4ee);
  plVar4[0x4f1] = 0;
  plVar4[0x4f2] = 0;
  plVar4[0x4f0] = (long)(plVar4 + 0x4f1);
  plVar4[0x4f4] = 0;
  plVar4[0x4f5] = 0;
  plVar4[0x4f3] = (long)(plVar4 + 0x4f4);
  lVar6 = FUN_1001ea62b(0);
  plVar4[0x57b] = lVar6;
  *(byte *)((long)plVar4 + 0x2be2) = *(byte *)((long)plVar4 + 0x2be2) | 1;
  FUN_1001b7a44(plVar4 + 0x58f);
  FUN_1001b7a44(plVar4 + 0x591);
  *(undefined4 *)(plVar4 + 0x595) = *(undefined4 *)(DAT_1008c76a0 + 0x1a54);
  plVar4[0x596] = 0;
  plVar4[0x597] = 0;
  FUN_10032f0f2(plVar4 + 0x59d);
  plVar4[0x59f] = 0;
  plVar4[0x5a0] = 0;
  plVar4[0x5a9] = 0;
  plVar4[0x5aa] = 0;
  plVar4[0x5b1] = 0;
  plVar4[0x5b2] = 0;
  plVar4[0x5b4] = 0;
  plVar4[0x5b5] = 0;
  if (*(int *)((long)plVar4 + 0x84) != 0x706d6574) {
    FUN_100324055(plVar4);
  }
  iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (iVar3 == -0x80) {
LAB_100314f8d:
    FUN_1003152ce(plVar4);
    plVar4 = (long *)0x0;
  }
  else if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar3 != 0) goto LAB_100314f8d;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = plVar4;
  }
LAB_100314fc9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

