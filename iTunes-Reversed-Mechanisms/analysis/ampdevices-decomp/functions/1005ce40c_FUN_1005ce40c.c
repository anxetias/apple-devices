// name: FUN_1005ce40c
// address: 1005ce40c

bool FUN_1005ce40c(long *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  size_t sVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  param_1[1] = *param_1;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "data != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_100170f3b(param_2);
    uVar4 = FUN_100170ef7(param_2);
    if (7 < uVar4) {
      puVar13 = (undefined8 *)param_1[1];
      uVar15 = 0;
      do {
        puVar9 = (undefined8 *)param_1[2];
        if (puVar13 < puVar9) {
          *puVar13 = *(undefined8 *)(lVar3 + uVar15 * 8);
          puVar13 = puVar13 + 1;
        }
        else {
          pvVar10 = (void *)*param_1;
          sVar12 = (long)puVar13 - (long)pvVar10;
          lVar14 = (long)sVar12 >> 3;
          uVar1 = lVar14 + 1;
          if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_100283ee2(param_1);
          }
          uVar8 = (long)puVar9 - (long)pvVar10;
          uVar5 = (long)uVar8 >> 2;
          if (uVar5 <= uVar1) {
            uVar5 = uVar1;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar5 = 0x1fffffffffffffff;
          }
          if (uVar5 == 0) {
            auVar16 = ZEXT816(0);
            lVar11 = lVar14;
          }
          else {
            auVar16 = FUN_100249b6c(param_1 + 2,uVar5);
            pvVar10 = (void *)*param_1;
            sVar12 = param_1[1] - (long)pvVar10;
            lVar11 = (long)sVar12 >> 3;
          }
          lVar6 = auVar16._0_8_;
          puVar9 = (undefined8 *)(lVar6 + lVar14 * 8);
          *puVar9 = *(undefined8 *)(lVar3 + uVar15 * 8);
          puVar13 = (undefined8 *)(lVar6 + lVar14 * 8 + 8);
          puVar9 = puVar9 + -lVar11;
          _memcpy(puVar9,pvVar10,sVar12);
          pvVar10 = (void *)*param_1;
          *param_1 = (long)puVar9;
          param_1[1] = (long)puVar13;
          param_1[2] = lVar6 + auVar16._8_8_ * 8;
          if (pvVar10 != (void *)0x0) {
            operator_delete(pvVar10);
          }
        }
        param_1[1] = (long)puVar13;
        uVar15 = uVar15 + 1;
      } while (uVar4 >> 3 != uVar15);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_2 != 0;
}

