// name: FUN_100272cbe
// address: 100272cbe

undefined4 * FUN_100272cbe(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 local_80 [16];
  long *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_54;
  double local_50;
  undefined1 local_48 [23];
  char local_31;
  
  local_70 = param_3;
  FUN_10015a0ac(local_80,param_2[1]);
  iVar3 = *(int *)(param_2 + 5);
  if (iVar3 == 0) {
    *(undefined4 *)((long)param_2 + 0x14) = 3;
    FUN_10032f0f2(local_48);
    *param_1 = *(undefined4 *)((long)param_2 + 0x14);
    FUN_1001a7abe(param_1 + 2,local_48);
  }
  else {
    if (*(int *)((long)param_2 + 0x14) == 1) {
LAB_100272ebc:
      plVar1 = local_70;
      local_50 = (double)param_2[3];
      local_31 = '\0';
      uVar4 = 0;
      local_68 = param_1;
      if (*local_70 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1001a8626(local_70);
        if (*plVar1 != 0) {
          uVar4 = FUN_1001a8610(plVar1);
        }
      }
      local_60 = 0;
      local_54 = 0;
      iVar3 = FUN_1000f8410(iVar3,local_50,*param_2,uVar5,uVar4,&local_60,&local_54,&local_31);
      param_1 = local_68;
      if (iVar3 == 0) {
        if (local_31 == '\0') {
          *(undefined4 *)((long)param_2 + 0x14) = 2;
          FUN_1001a833e(local_48,local_60,local_54,0);
          *param_1 = *(undefined4 *)((long)param_2 + 0x14);
          FUN_1001a7abe(param_1 + 2,local_48);
        }
        else {
          if (local_31 != '\x01') goto LAB_100272f3e;
          FUN_1001a833e(local_48,local_60,local_54,0);
          *param_1 = *(undefined4 *)((long)param_2 + 0x14);
          FUN_1001a7abe(param_1 + 2,local_48);
        }
      }
      else {
        local_31 = -1;
LAB_100272f3e:
        *(undefined4 *)((long)param_2 + 0x14) = 3;
        FUN_10032f0f2(local_48);
        *param_1 = *(undefined4 *)((long)param_2 + 0x14);
        FUN_1001a7abe(param_1 + 2,local_48);
      }
      FUN_1001a85d4(local_48);
      FUN_10027305a(local_60);
      goto LAB_100272f76;
    }
    if (*(int *)((long)param_2 + 0x14) == 0) {
      iVar3 = FUN_100079ff0(param_2,param_2[3]);
      if (iVar3 == -0xa5a8) {
        uVar5 = param_2[3];
        cVar2 = FUN_1001ee056();
        if (cVar2 == '\0') {
          iVar7 = 10;
          iVar6 = 0x32;
          do {
            FUN_1001ee7b6(iVar6);
            iVar3 = FUN_100079ff0(param_2,uVar5);
            iVar6 = iVar6 << (iVar3 == -0xa5a8);
            if (iVar3 != -0xa5a8) break;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        else {
          cVar2 = FUN_1001edfc7();
          iVar6 = 10;
          dVar8 = DAT_10070f2b8;
          if (cVar2 == '\0') {
            do {
              local_50 = dVar8;
              FUN_1001b0d8d();
              iVar3 = FUN_100079ff0(param_2,uVar5);
              iVar6 = iVar6 - (uint)(iVar3 == -0xa5a8);
              if (iVar3 != -0xa5a8) break;
              dVar8 = local_50 + local_50;
            } while (iVar6 != 0);
          }
          else {
            local_50 = DAT_10070f2b8;
            do {
              local_68 = (undefined4 *)FUN_1001ebd46();
              do {
                FUN_1001b153d();
                FUN_1001ee7ac();
                dVar8 = (double)FUN_1001ebd46();
              } while (dVar8 - (double)local_68 < local_50);
              iVar3 = FUN_100079ff0(param_2,uVar5);
              iVar6 = iVar6 - (uint)(iVar3 == -0xa5a8);
            } while ((iVar3 == -0xa5a8) && (local_50 = local_50 + local_50, 0 < iVar6));
          }
        }
      }
      if (iVar3 == 0) {
        *(undefined4 *)((long)param_2 + 0x14) = 1;
        iVar3 = *(int *)(param_2 + 5);
        goto LAB_100272ebc;
      }
      *(undefined4 *)((long)param_2 + 0x14) = 3;
      FUN_10032f0f2(local_48);
      *param_1 = *(undefined4 *)((long)param_2 + 0x14);
      FUN_1001a7abe(param_1 + 2,local_48);
    }
    else {
      FUN_10032f0f2(local_48);
      *param_1 = *(undefined4 *)((long)param_2 + 0x14);
      FUN_1001a7abe(param_1 + 2,local_48);
    }
  }
  FUN_1001a85d4(local_48);
LAB_100272f76:
  FUN_10015a142(local_80);
  return param_1;
}

