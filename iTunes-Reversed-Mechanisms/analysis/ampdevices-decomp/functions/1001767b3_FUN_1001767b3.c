// name: FUN_1001767b3
// address: 1001767b3

int FUN_1001767b3(int *param_1,int param_2,ulong param_3,uint param_4,void *param_5)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  uint local_38;
  uint local_34;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      FUN_10068289c(uVar8);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(byte *)(param_1 + 3) & 1) != 0) {
    lVar9 = *(long *)(param_1 + 10);
    local_34 = (uint)param_3;
    if (lVar9 == 0) {
      iVar4 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x6e616d65);
      if (iVar4 != 0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 == '\0') {
          return iVar4;
        }
        FUN_100682744(iVar4,uVar8);
        return iVar4;
      }
      lVar9 = *(long *)(param_1 + 10);
      param_3 = (ulong)local_34;
    }
    psVar5 = (short *)FUN_1001773b9(lVar9,param_2 + (uint)(param_2 == 0),param_3,0);
    if (psVar5 != (short *)0x0) {
      iVar4 = FUN_10015bb96(*(undefined8 *)(param_1 + 6),0,0x63686170,(int)*psVar5,0);
      if (iVar4 == 0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          FUN_100682826(uVar8);
        }
      }
      else {
        pvVar6 = (void *)FUN_10015c089(*(undefined8 *)(param_1 + 6),iVar4,0x6e616d65,1,&local_38);
        if (pvVar6 != (void *)0x0) {
          if (param_4 < local_38) {
            local_38 = param_4;
          }
          uVar2 = local_38;
          _memcpy(param_5,pvVar6,(ulong)local_38);
          if (1 < uVar2) {
            uVar7 = 0;
            do {
              puVar1 = (ushort *)((long)param_5 + uVar7 * 2);
              *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
              uVar7 = uVar7 + 1;
            } while (uVar2 >> 1 != uVar7);
          }
          if ((local_34 & 4) != 0) {
            return 0;
          }
          FUN_1001e654f(param_5);
          return 0;
        }
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          FUN_1006827b0(uVar8);
        }
      }
      FUN_1001782e9(0,0);
    }
  }
  return -0x32;
}

