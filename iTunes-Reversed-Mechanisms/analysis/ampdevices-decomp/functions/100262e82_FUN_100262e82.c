// name: FUN_100262e82
// address: 100262e82

undefined8 * FUN_100262e82(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  long local_48 [2];
  cfstringStruct *local_38;
  
  *param_1 = 0;
  FUN_1001c62d9(param_1 + 1,0x20);
  local_38 = &cf_pid;
  FUN_1001a7b90(local_48);
  cVar6 = FUN_1001a9810(param_2,local_48,local_58);
  if (cVar6 == '\0') {
    local_58[0] = 0;
  }
  *param_1 = local_58[0];
  FUN_1001ab240(local_48);
  FUN_1001a7b90(&local_38);
  FUN_10032f0f2(local_68);
  FUN_10032f0f2(local_58);
  cVar6 = FUN_1001a92ae(param_2,&local_38,local_58);
  puVar8 = local_68;
  if (cVar6 != '\0') {
    puVar8 = local_58;
  }
  FUN_1001a7a9e(local_48,puVar8);
  FUN_1001a85d4(local_58);
  FUN_1001a85d4(local_68);
  FUN_1001ab240(&local_38);
  if (local_48[0] != 0) {
    puVar7 = (undefined4 *)FUN_1001a8626(local_48);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    uVar5 = *(undefined8 *)(puVar7 + 6);
    param_1[3] = *(undefined8 *)(puVar7 + 4);
    param_1[4] = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
  }
  FUN_1001a85d4(local_48);
  return param_1;
}

