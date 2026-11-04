// name: FUN_1002f506e
// address: 1002f506e

undefined1 FUN_1002f506e(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  uint local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = FUN_100169bb7(0,"iPodVoiceOver.framework");
    cVar1 = FUN_1001c449b(uVar4,&PTR_cf_VVViTSLInitialize_100853760,0x15,&local_d8,0);
    if (cVar1 != '\0') {
      *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_d4,local_d8);
      *(ulong *)(param_1 + 0x18) = CONCAT26(uStack_ca,CONCAT24(uStack_cc,uStack_d0));
      *(ulong *)(param_1 + 0x20) = CONCAT62(uStack_c6,uStack_c8);
      *(undefined8 *)(param_1 + 0x28) = uStack_c0;
      *(undefined8 *)(param_1 + 0x30) = local_b8;
      *(undefined8 *)(param_1 + 0x38) = uStack_b0;
      *(undefined8 *)(param_1 + 0x40) = local_a8;
      *(undefined8 *)(param_1 + 0x48) = uStack_a0;
      *(undefined8 *)(param_1 + 0x50) = local_98;
      *(undefined8 *)(param_1 + 0x58) = uStack_90;
      *(undefined8 *)(param_1 + 0x60) = local_88;
      *(undefined8 *)(param_1 + 0x68) = uStack_80;
      *(undefined8 *)(param_1 + 0x70) = local_78;
      *(undefined8 *)(param_1 + 0x78) = uStack_70;
      *(undefined8 *)(param_1 + 0x80) = local_68;
      *(undefined8 *)(param_1 + 0x88) = uStack_60;
      *(undefined8 *)(param_1 + 0x90) = local_58;
      *(undefined8 *)(param_1 + 0x98) = uStack_50;
      *(undefined4 *)(param_1 + 0xa0) = local_48;
      *(undefined4 *)(param_1 + 0xa4) = uStack_44;
      *(undefined4 *)(param_1 + 0xa8) = uStack_40;
      *(undefined4 *)(param_1 + 0xac) = uStack_3c;
      *(undefined8 *)(param_1 + 0xb0) = local_38;
    }
    FUN_10017060f(uVar4);
    if (((((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
         (*(long *)(param_1 + 0x28) == 0)) ||
        ((*(long *)(param_1 + 0x30) == 0 || (*(long *)(param_1 + 0x38) == 0)))) ||
       ((*(long *)(param_1 + 0x48) == 0 || (*(long *)(param_1 + 0x50) == 0)))) {
      FUN_1002f4ef6(param_1);
      bVar5 = false;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      iVar3 = -0x32;
LAB_1002f523e:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_d8 = 0x8220202;
        uStack_d4 = 0x7a0a90;
        uStack_d0 = 1;
        uStack_cc = 0x400;
        uStack_ca = (undefined2)iVar3;
        uStack_c8 = (undefined2)((uint)iVar3 >> 0x10);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_d8,0x12);
      }
      if (bVar5) goto LAB_1002f525c;
    }
    else {
      cVar1 = FUN_1002f47a6();
      if ((cVar1 == '\0') || (local_dc < 0x1300000)) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      iVar3 = FUN_1002f4bfe(param_1);
      bVar5 = iVar3 == 0;
      if (iVar3 != -0x80) {
        if (iVar3 == 0) goto LAB_1002f525c;
        goto LAB_1002f523e;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_1002f525c:
    uVar2 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

