// name: FUN_10015e46f
// address: 10015e46f

int FUN_10015e46f(double *param_1,double *param_2,char param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_64;
  undefined8 *local_60;
  double local_58;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (double *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      FUN_10066dbd3(uVar10);
    }
  }
  else if (param_2 == (double *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      FUN_10066db5d(uVar10);
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      puVar8 = (undefined4 *)FUN_1001c6429(0x98);
      if (puVar8 == (undefined4 *)0x0) {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          FUN_10066da71(uVar10);
        }
        FUN_1001782e9(0,0);
        iVar6 = -0x6c;
        goto LAB_10015e64c;
      }
      *(double *)(puVar8 + 10) = param_1[4];
      dVar2 = *param_1;
      dVar3 = param_1[1];
      dVar4 = param_1[3];
      *(double *)(puVar8 + 6) = param_1[2];
      *(double *)(puVar8 + 8) = dVar4;
      *(double *)(puVar8 + 2) = dVar2;
      *(double *)(puVar8 + 4) = dVar3;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar4 = param_2[3];
      *(double *)(puVar8 + 0xc) = *param_2;
      *(double *)(puVar8 + 0xe) = dVar2;
      *(double *)(puVar8 + 0x10) = dVar3;
      *(double *)(puVar8 + 0x12) = dVar4;
      *(double *)(puVar8 + 0x14) = param_2[4];
      puVar8[0x18] = 2;
      *(undefined1 *)((long)puVar8 + 0x79) = 1;
      iVar6 = _memcmp(param_1,param_2,0x28);
      *(bool *)(puVar8 + 0x1e) = iVar6 == 0;
      if ((*(int *)(param_1 + 1) != 0x6c70636d) || (*(int *)(param_2 + 1) != 0x6c70636d)) {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          FUN_10066d7d5(uVar10);
        }
        FUN_1001782e9(0,0);
        iVar6 = -0xce;
        goto LAB_10015e64c;
      }
      if (iVar6 != 0) {
        puVar1 = (undefined8 *)*param_1;
        uVar13 = SUB84(puVar1,0);
        uVar14 = (undefined4)((ulong)puVar1 >> 0x20);
        dVar2 = *param_2;
        uVar15 = SUB84(dVar2,0);
        uVar16 = (undefined4)((ulong)dVar2 >> 0x20);
        local_60 = param_4;
        if ((((double)puVar1 == dVar2) && (!NAN((double)puVar1) && !NAN(dVar2))) &&
           (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c))) {
          local_58 = dVar2;
          local_48 = puVar1;
          uVar7 = FUN_10015e9e4(param_1);
          iVar6 = FUN_10015e9e4(param_2);
          uVar15 = SUB84(local_58,0);
          uVar16 = (undefined4)((ulong)local_58 >> 0x20);
          uVar13 = SUB84(local_48,0);
          uVar14 = (undefined4)((ulong)local_48 >> 0x20);
          switch(uVar7) {
          case 1:
            if (iVar6 == 2) {
LAB_10015e727:
              pcVar9 = FUN_10015e3c5;
              goto LAB_10015e737;
            }
            if (iVar6 == 3) {
              pcVar9 = FUN_10015ea28;
              goto LAB_10015e737;
            }
            break;
          case 2:
            if (iVar6 == 1) goto LAB_10015e727;
            if (iVar6 == 3) {
              pcVar9 = FUN_10015ea3a;
              goto LAB_10015e737;
            }
            break;
          case 3:
            if (iVar6 == 1) {
              pcVar9 = FUN_10015ea4c;
            }
            else {
              if (iVar6 == 4) goto LAB_10015e70b;
              if (iVar6 != 2) break;
              pcVar9 = FUN_10015ea56;
            }
LAB_10015e737:
            *(code **)(puVar8 + 0x1c) = pcVar9;
            break;
          case 4:
            if (iVar6 == 5) {
LAB_10015e70b:
              pcVar9 = FUN_10015e452;
              goto LAB_10015e737;
            }
            break;
          case 5:
            if (iVar6 == 4) goto LAB_10015e70b;
          }
        }
        param_4 = local_60;
        if (*(long *)(puVar8 + 0x1c) == 0) {
          if (((double)CONCAT44(uVar14,uVar13) != (double)CONCAT44(uVar16,uVar15)) ||
             (NAN((double)CONCAT44(uVar14,uVar13)) || NAN((double)CONCAT44(uVar16,uVar15)))) {
            bVar12 = false;
          }
          else {
            bVar12 = *(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c);
          }
          *(bool *)((long)puVar8 + 0x7b) = bVar12;
          local_48 = (undefined8 *)(puVar8 + 0x16);
          iVar6 = _AudioConverterNew(param_1,param_2);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              if ((*param_1 != *param_2) || (NAN(*param_1) || NAN(*param_2))) {
                local_40 = CONCAT44(local_40._4_4_,0x7f);
                iVar6 = _AudioConverterSetProperty(*local_48,0x73726371,4);
                if ((iVar6 != -0x80) && (iVar6 != 0)) {
                  local_58 = (double)FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(local_58,0x10);
                  if (cVar5 != '\0') {
                    FUN_10066d84b(iVar6,local_58);
                  }
                }
                if (param_3 != '\0') {
                  local_4c = 0x62617473;
                  iVar6 = _AudioConverterSetProperty(*local_48,0x73726361,4);
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar10 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar5 != '\0') {
                      FUN_10066d8b7(iVar6,uVar10);
                    }
                  }
                }
                local_4c = 8;
                iVar6 = _AudioConverterGetProperty
                                  (*(undefined8 *)(puVar8 + 0x16),0x7072696d,&local_4c,puVar8 + 0x19
                                  );
                if (iVar6 == 0) {
                  local_4c = 4;
                  iVar6 = _AudioConverterGetProperty(*local_48,0x70726d6d,&local_4c,&local_64);
                  if (iVar6 == 0) {
                    puVar8[0x18] = local_64;
                    iVar6 = (puVar8[0x1a] + puVar8[0x19]) * *(int *)(param_1 + 3);
                    if (iVar6 != 0) {
                      lVar11 = FUN_1001c6429(iVar6);
                      *(long *)(puVar8 + 0x20) = lVar11;
                      if (lVar11 == 0) {
                        uVar10 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar10,0x10);
                        if (cVar5 != '\0') {
                          FUN_10066d923(uVar10);
                        }
                        FUN_1001782e9(0,0);
                        puVar8[0x18] = 2;
                      }
                    }
                  }
                }
              }
              param_4 = local_60;
              if ((*(int *)((long)param_1 + 0x1c) == 1) && (*(int *)((long)param_2 + 0x1c) == 2)) {
                local_40 = 0;
                iVar6 = _AudioConverterSetProperty(*local_48,0x63686d70,8);
                param_4 = local_60;
                if ((iVar6 != -0x80) && (iVar6 != 0)) {
                  uVar10 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                  param_4 = local_60;
                  if (cVar5 != '\0') {
                    FUN_10066d999(iVar6,uVar10);
                    param_4 = local_60;
                  }
                }
              }
              goto LAB_10015e746;
            }
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              FUN_10066da05(iVar6,uVar10);
            }
          }
          FUN_1001c64c1(puVar8);
          goto LAB_10015e64c;
        }
      }
LAB_10015e746:
      *param_4 = puVar8;
      *puVar8 = 0x61756463;
      iVar6 = 0;
      goto LAB_10015e64c;
    }
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      FUN_10066dae7(uVar10);
    }
  }
  FUN_1001782e9(0,0);
  iVar6 = -0x32;
LAB_10015e64c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

