// name: FUN_10015ed5d
// address: 10015ed5d

int FUN_10015ed5d(int *param_1,void *param_2,uint *param_3,void *param_4,uint *param_5,long param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint local_58 [2];
  int local_50;
  uint local_4c;
  void *local_48;
  uint *local_40;
  uint local_38;
  uint local_34;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61756463)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10066df7b(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x1c;
  }
  else {
    uVar5 = (ulong)*param_3;
    uVar8 = uVar5 / (uint)param_1[8];
    lVar6 = *(long *)(param_1 + 0x16);
    uVar7 = (uint)uVar8;
    if (lVar6 == 0) {
      if ((char)param_1[0x1e] == '\0') {
        if (*(code **)(param_1 + 0x1c) == (code *)0x0) {
          *param_3 = 0;
          *param_5 = 0;
          return -0x32;
        }
        (**(code **)(param_1 + 0x1c))(param_2,param_4,param_1[9] * uVar7);
      }
      else {
        _memmove(param_4,param_2,(ulong)(uVar7 * param_1[8]));
      }
      *param_5 = param_1[0x12] * uVar7;
      iVar2 = 0;
    }
    else {
      local_40 = param_5;
      if (*(char *)((long)param_1 + 0x7b) == '\0') {
        local_58[0] = 1;
        local_50 = param_1[0x13];
        local_4c = *param_5;
        param_1[0x25] = 0;
        param_1[0x24] = *param_3;
        *(void **)(param_1 + 0x22) = param_2;
        local_48 = param_4;
        if ((*(double *)(param_1 + 2) != *(double *)(param_1 + 0xc)) ||
           (NAN(*(double *)(param_1 + 2)) || NAN(*(double *)(param_1 + 0xc)))) {
          local_34 = *param_5 / (uint)param_1[0x12];
        }
        else {
          local_34 = uVar7;
          if (*param_5 < param_1[0x12] * uVar7) {
            local_38 = uVar7;
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              FUN_10066de99(uVar4);
            }
            FUN_1001782e9(0,0);
            uVar8 = (ulong)local_38;
          }
        }
        if (((param_1[9] == 2) && (param_6 != 0)) && (param_1[0x13] == 1)) {
          iVar2 = FUN_10015f04f(param_1 + 2,param_2,param_6,uVar8);
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') {
              return iVar2;
            }
            FUN_10066df0f(iVar2,uVar4);
            return iVar2;
          }
          *(long *)(param_1 + 0x22) = param_6;
          iVar3 = _AudioConverterFillComplexBuffer
                            (*(undefined8 *)(param_1 + 0x16),FUN_10015ebd4,param_1,&local_34,
                             local_58,0);
          *(void **)(param_1 + 0x22) = param_2;
        }
        else {
          iVar3 = _AudioConverterFillComplexBuffer
                            (*(undefined8 *)(param_1 + 0x16),FUN_10015ebd4,param_1,&local_34,
                             local_58,0);
        }
        *param_3 = param_1[0x25];
        *local_40 = param_1[0x12] * local_34;
        iVar2 = 0;
        if (iVar3 != -0x27) {
          iVar2 = iVar3;
        }
      }
      else {
        local_58[0] = param_1[0x12] * uVar7;
        if (*param_5 < local_58[0]) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_10066de23(uVar4);
          }
          FUN_1001782e9(0,0);
          lVar6 = *(long *)(param_1 + 0x16);
          uVar5 = (ulong)*param_3;
        }
        iVar2 = _AudioConverterConvertBuffer(lVar6,uVar5,param_2,local_58,param_4);
        if (iVar2 == 0) {
          *local_40 = local_58[0];
        }
      }
    }
  }
  return iVar2;
}

