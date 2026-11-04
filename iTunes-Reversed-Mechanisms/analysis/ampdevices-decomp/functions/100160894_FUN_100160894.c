// name: FUN_100160894
// address: 100160894

int FUN_100160894(long param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_48;
  ulong local_40;
  ulong *local_38;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = *param_2;
    if (uVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_1001605d9(param_1,0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          lVar2 = *(long *)(param_1 + 0x20);
          uVar6 = (*(long *)(param_1 + 0x38) - lVar2) + 1;
          local_40 = uVar1 - uVar6;
          local_38 = param_2;
          if (uVar1 < uVar6) {
            FUN_1001c631b(param_3,lVar2,uVar1);
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar1;
            iVar4 = 0;
            uVar6 = uVar1;
          }
          else {
            FUN_1001c631b(param_3,lVar2,uVar6);
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar6;
            iVar4 = FUN_1001602ae(param_1);
            if (iVar4 == 0) {
              local_48 = local_40;
              if (*(ulong *)(param_1 + 0x18) < local_40) {
                iVar4 = FUN_1001d717d(*(undefined8 *)(param_1 + 8),&local_48,param_3 + uVar6,0);
              }
              else {
                FUN_1001c631b(param_3 + uVar6,*(undefined8 *)(param_1 + 0x20),local_40);
                *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + local_40;
                iVar4 = 0;
                local_48 = local_40;
              }
              uVar6 = uVar6 + local_48;
            }
          }
          *local_38 = uVar6;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            FUN_10066ef59(iVar4,uVar5);
          }
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_10066eee3(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
  }
  return iVar4;
}

