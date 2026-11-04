// name: FUN_1003471b5
// address: 1003471b5

undefined8 FUN_1003471b5(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  void *pvVar2;
  char cVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((int)param_5 == 0x46a) || (((int)param_5 + 0x80U & 0xffffff7f) == 0)) {
LAB_1003472ef:
    uVar6 = 0;
    goto LAB_1003472f2;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x157f8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = operator_new(0x220,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x157f8) = 0;
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "handlerData->pendingSyncExceptions != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1003472ef;
    }
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined8 *)((long)puVar5 + 0x34) = 0;
    *(undefined8 *)((long)puVar5 + 0x3c) = 0;
    *(undefined8 *)((long)puVar5 + 0x44) = 0;
    *(undefined8 *)((long)puVar5 + 0x4c) = 0;
    ___bzero(puVar5 + 0xb,0x1c8);
    *(undefined8 **)(param_1 + 0x157f8) = puVar5;
  }
  cVar3 = FUN_10057bb0c(puVar5,param_1 + 0x14cd0);
  if (param_2 == 0) {
    if (param_3 != 0) {
      lVar1 = *(long *)(param_1 + 0x157f8);
      *(undefined1 *)(lVar1 + 0x11) = 1;
      FUN_10057d7f6(param_3,param_5 & 0xffffffff,lVar1 + 0x118);
      goto LAB_100347330;
    }
    if (param_4 != 0) {
      FUN_10057da6e(*(undefined8 *)(param_1 + 0x157f8),param_4,param_5 & 0xffffffff);
      goto LAB_100347330;
    }
    uVar6 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x157f8);
    *(undefined1 *)(lVar1 + 0x11) = 1;
    FUN_10057c238(param_2,param_5 & 0xffffffff,lVar1 + 0x118);
LAB_100347330:
    uVar6 = CONCAT71((int7)((param_5 & 0xffffffff) >> 8),1);
  }
  cVar4 = FUN_10057bb0c(*(undefined8 *)(param_1 + 0x157f8),param_1 + 0x14cd0);
  if (cVar4 == '\0') {
    pvVar2 = *(void **)(param_1 + 0x157f8);
    if (pvVar2 != (void *)0x0) {
      FUN_1003380d0(pvVar2);
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x157f8) = 0;
  }
  else if (cVar3 == '\0') {
    uVar7 = FUN_1001c156e();
    FUN_1001c6987(uVar7,0x69706572,*(undefined4 *)(param_1 + 0x28),1,0);
  }
LAB_1003472f2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

