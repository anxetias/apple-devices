// name: FUN_10032f46e
// address: 10032f46e

ulong FUN_10032f46e(long param_1,long param_2,void *param_3,long param_4,undefined8 param_5,
                   uint param_6,long param_7)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 local_488;
  char *local_484;
  undefined2 local_47c;
  char *local_47a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 < 4) {
LAB_10032f5ed:
    uVar10 = 0;
    goto LAB_10032f5f0;
  }
  uVar10 = 0;
  if ((param_6 == 0xc) || (param_6 == 0x2d)) goto LAB_10032f5f0;
  puVar6 = *(undefined8 **)(param_1 + 0x157f8);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = operator_new(0x220,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x157f8) = 0;
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_488 = 0x8220202;
        local_484 = "Assertion failure";
        local_47c = 0x822;
        local_47a = "handlerData->pendingSyncExceptions != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10032f5ed;
    }
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined1 *)(puVar6 + 6) = 0;
    *(undefined8 *)((long)puVar6 + 0x34) = 0;
    *(undefined8 *)((long)puVar6 + 0x3c) = 0;
    *(undefined8 *)((long)puVar6 + 0x44) = 0;
    *(undefined8 *)((long)puVar6 + 0x4c) = 0;
    ___bzero(puVar6 + 0xb,0x1c8);
    *(undefined8 **)(param_1 + 0x157f8) = puVar6;
  }
  cVar3 = FUN_10057bb0c(puVar6);
  if (param_2 == 0) {
    if (param_3 != (void *)0x0) {
      FUN_1001c62d9(&local_488,0x448);
      _memcpy(&local_488,param_3,0x420);
      uVar5 = FUN_10057c396(*(undefined8 *)(param_1 + 0x157f8),0x46494c45,&local_488,param_6);
      goto LAB_10032f63b;
    }
    if (param_4 != 0) {
      uVar5 = FUN_10057d1fa(*(undefined8 *)(param_1 + 0x157f8),param_4,param_6);
      goto LAB_10032f63b;
    }
    cVar4 = FUN_1001b8428(param_5);
    if (cVar4 == '\0') {
      lVar2 = *(long *)(param_1 + 0x157f8);
      if (param_6 == 5) {
        lVar9 = 0x58;
        lVar8 = 2;
      }
      else {
        if (param_6 != 0x33) goto LAB_10032f6f6;
        lVar9 = 0x208;
        lVar8 = 0x12;
      }
      *(undefined1 *)(lVar2 + lVar8) = 1;
      FUN_10057d6a2(param_5,param_6,lVar9 + lVar2);
      uVar10 = CONCAT71((int7)((ulong)puVar6 >> 8),1);
    }
    else {
      if (param_7 != 0) {
        uVar5 = FUN_1003d33ec(param_7,*(undefined8 *)(param_1 + 0x157f8));
        goto LAB_10032f63b;
      }
LAB_10032f6f6:
      uVar10 = 0;
    }
  }
  else {
    uVar5 = FUN_10057bfae(*(undefined8 *)(param_1 + 0x157f8),param_2,param_6);
LAB_10032f63b:
    uVar10 = (ulong)uVar5;
  }
  cVar4 = FUN_10057bb0c(*(undefined8 *)(param_1 + 0x157f8),param_1 + 0x14cd0);
  if (cVar4 == '\0') {
    pvVar1 = *(void **)(param_1 + 0x157f8);
    if (pvVar1 != (void *)0x0) {
      FUN_1003380d0(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x157f8) = 0;
  }
  else if (cVar3 == '\0') {
    uVar7 = FUN_1001c156e();
    FUN_1001c6987(uVar7,0x69706572,*(undefined4 *)(param_1 + 0x28),1,0);
  }
LAB_10032f5f0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

