// name: FUN_1004e3dbc
// address: 1004e3dbc

void FUN_1004e3dbc(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  pid_t pVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar10 = (undefined8 *)(param_1 + 0x80);
  puVar9 = puVar10;
  do {
    puVar9 = (undefined8 *)*puVar9;
    if (puVar9 == (undefined8 *)0x0) goto LAB_1004e3e75;
  } while (puVar9[1] != param_2);
  puVar7 = puVar10;
  puVar2 = (undefined8 *)0x0;
  do {
    puVar8 = puVar2;
    puVar7 = (undefined8 *)*puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_1004e3e1c;
    puVar2 = puVar7;
  } while (puVar7 != puVar9);
  if (puVar8 != (undefined8 *)0x0) {
    puVar10 = puVar8;
  }
  *puVar10 = *puVar9;
  *puVar9 = 0;
LAB_1004e3e1c:
  FUN_100264ec8(puVar9[2]);
  lVar1 = puVar9[4];
  if (lVar1 != 0) {
    pVar4 = _getpid();
    iVar5 = FUN_1001c4a84(lVar1,pVar4,0);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar5;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    FUN_1001c4a8e(puVar9[4]);
  }
  operator_delete(puVar9);
LAB_1004e3e75:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

