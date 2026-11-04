// name: FUN_100594adc
// address: 100594adc

undefined8 FUN_100594adc(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "objectListPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    puVar3 = (undefined8 *)FUN_1001c629e(0x20,&DAT_100711c6e);
    uVar6 = 0xffffff94;
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0x14f4c5354;
      if (param_2 != 0) {
        auVar8 = FUN_100596e80(param_2);
        lVar4 = auVar8._0_8_;
        sVar5 = puVar3[2] - (long)puVar3[1];
        pvVar7 = (void *)(lVar4 - sVar5);
        _memcpy(pvVar7,(void *)puVar3[1],sVar5);
        pvVar1 = (void *)puVar3[1];
        puVar3[1] = pvVar7;
        puVar3[2] = lVar4;
        puVar3[3] = auVar8._8_8_ * 0x38 + lVar4;
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
      }
      uVar6 = 0;
    }
    *param_1 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

