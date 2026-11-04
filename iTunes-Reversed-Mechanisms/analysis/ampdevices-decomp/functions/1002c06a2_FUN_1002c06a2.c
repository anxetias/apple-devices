// name: FUN_1002c06a2
// address: 1002c06a2

void FUN_1002c06a2(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  size_t sVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  long *local_38;
  
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  pvVar5 = *(void **)(param_2 + 0x210);
  sVar10 = *(long *)(param_2 + 0x218) - (long)pvVar5;
  if (sVar10 != 0) {
    if ((ulong)(*(long *)(param_2 + 0x218) - (long)pvVar5 >> 3) >> 0x3d != 0) {
      FUN_1002c2cdc(param_1 + 0x210);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    auVar12 = FUN_100249b6c(param_1 + 0x220);
    pvVar4 = auVar12._0_8_;
    *(void **)(param_1 + 0x210) = pvVar4;
    *(void **)(param_1 + 0x218) = pvVar4;
    *(void **)(param_1 + 0x220) = (void *)((long)pvVar4 + auVar12._8_8_ * 8);
    _memmove(pvVar4,pvVar5,sVar10);
    *(size_t *)(param_1 + 0x218) = (long)pvVar4 + sVar10;
  }
  plVar1 = (long *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(long **)(param_1 + 0x228) = plVar1;
  plVar6 = *(long **)(param_2 + 0x228);
  if (plVar6 != (long *)(param_2 + 0x230)) {
    local_38 = (long *)0x0;
    plVar7 = plVar1;
    do {
      uVar2 = *(uint *)((long)plVar6 + 0x1c);
      plVar9 = plVar1;
      if (plVar7 == plVar1) {
LAB_1002c07ef:
        plVar7 = plVar9 + 1;
        if (local_38 == (long *)0x0) {
          plVar7 = plVar1;
          plVar9 = plVar1;
        }
        if (*plVar7 == 0) goto LAB_1002c083e;
      }
      else {
        plVar7 = local_38;
        plVar8 = plVar1;
        if (local_38 == (long *)0x0) {
          do {
            plVar9 = (long *)plVar8[2];
            bVar11 = (long *)*plVar9 == plVar8;
            plVar8 = plVar9;
          } while (bVar11);
        }
        else {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)plVar9[1];
          } while ((long *)plVar9[1] != (long *)0x0);
        }
        if (*(uint *)((long)plVar9 + 0x1c) < uVar2) goto LAB_1002c07ef;
        plVar9 = plVar1;
        plVar7 = plVar1;
        if (local_38 != (long *)0x0) {
          do {
            while (plVar9 = local_38, uVar2 < *(uint *)((long)plVar9 + 0x1c)) {
              local_38 = (long *)*plVar9;
              plVar7 = plVar9;
              if ((long *)*plVar9 == (long *)0x0) goto LAB_1002c083e;
            }
            if (uVar2 <= *(uint *)((long)plVar9 + 0x1c)) goto LAB_1002c085e;
            local_38 = (long *)plVar9[1];
          } while ((long *)plVar9[1] != (long *)0x0);
          plVar7 = plVar9 + 1;
        }
LAB_1002c083e:
        pvVar5 = operator_new(0x20);
        *(uint *)((long)pvVar5 + 0x1c) = uVar2;
        FUN_10020e4b6((undefined8 *)(param_1 + 0x228),plVar9,plVar7,pvVar5);
      }
LAB_1002c085e:
      plVar7 = (long *)plVar6[1];
      plVar9 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar9[2];
          bVar11 = (long *)*plVar6 != plVar9;
          plVar9 = plVar6;
        } while (bVar11);
      }
      else {
        do {
          plVar6 = plVar7;
          plVar7 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if (plVar6 == (long *)(param_2 + 0x230)) break;
      local_38 = (long *)*plVar1;
      plVar7 = *(long **)(param_1 + 0x228);
    } while( true );
  }
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0x248);
  FUN_1001e1c39();
  return;
}

