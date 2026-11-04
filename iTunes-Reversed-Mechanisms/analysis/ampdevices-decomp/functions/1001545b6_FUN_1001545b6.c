// name: FUN_1001545b6
// address: 1001545b6

void FUN_1001545b6(undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  void **local_50;
  void *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  
  FUN_10032f0f2();
  local_48 = (void *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  if (param_4 != 0) {
    FUN_100133e1a(&local_48,param_4);
  }
  if (param_2 != param_3) {
    do {
      FUN_1001547a0(&local_50,param_2,0);
      uVar5 = _CFRetain(local_50);
      if (puStack_40 < local_38) {
        *puStack_40 = uVar5;
        puVar10 = puStack_40 + 1;
      }
      else {
        lVar9 = (long)puStack_40 - (long)local_48 >> 3;
        uVar1 = lVar9 + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_10012c430(&local_48);
        }
        uVar7 = (long)local_38 - (long)local_48 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < (ulong)((long)local_38 - (long)local_48)) {
          uVar7 = 0x1fffffffffffffff;
        }
        if (uVar7 == 0) {
          auVar12 = ZEXT816(0);
        }
        else {
          auVar12 = FUN_100249b6c(&local_38);
        }
        lVar6 = auVar12._0_8_;
        puVar2 = (undefined8 *)(lVar6 + lVar9 * 8);
        puVar3 = (undefined8 *)(lVar6 + auVar12._8_8_ * 8);
        *puVar2 = uVar5;
        puVar10 = (undefined8 *)(lVar6 + lVar9 * 8 + 8);
        pvVar8 = (void *)((long)puVar2 - ((long)puStack_40 - (long)local_48));
        _memcpy(pvVar8,local_48,(long)puStack_40 - (long)local_48);
        pvVar4 = local_48;
        bVar11 = local_48 != (void *)0x0;
        local_48 = pvVar8;
        local_38 = puVar3;
        if (bVar11) {
          puStack_40 = puVar10;
          operator_delete(pvVar4);
        }
      }
      puStack_40 = puVar10;
      FUN_1001aae6c(&local_50);
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  local_50 = &local_48;
  FUN_1001a7932(param_1,local_48,(long)puStack_40 - (long)local_48 >> 3);
  FUN_1001547d6(&local_50);
  if (local_48 != (void *)0x0) {
    puStack_40 = local_48;
    operator_delete(local_48);
  }
  return;
}

