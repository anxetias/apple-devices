// name: FUN_1001bb052
// address: 1001bb052

undefined8 FUN_1001bb052(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  long lVar3;
  
  uVar1 = DAT_1008c4d90;
  lVar3 = *param_2;
  if (lVar3 == 0) {
    puVar2 = &DAT_100711b00;
    if (param_2[1] == 0) goto LAB_1001bb089;
    FUN_1001b8454(param_2);
    lVar3 = *param_2;
    if (lVar3 == 0) goto LAB_1001bb089;
  }
  puVar2 = (undefined2 *)(lVar3 + 0xc);
LAB_1001bb089:
  uVar4 = FUN_1001b8378(param_2);
  local_50 = _CFStringCreateWithCharactersNoCopy
                       (uVar1,puVar2,uVar4,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  local_48 = &local_50;
  FUN_1001aaef6(local_40,local_50);
  FUN_1001aaf14(local_38,param_3);
  FUN_1001ab17c(param_1,local_40,local_38);
  FUN_1001ab006(local_38);
  FUN_1001ab006(local_40);
  FUN_10017060f(local_50);
  return param_1;
}

