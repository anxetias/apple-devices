// name: FUN_1001593ea
// address: 1001593ea

undefined8 FUN_1001593ea(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 local_60 [12];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined1 local_40 [23];
  char local_29;
  
  FUN_1001b7a44(local_40);
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_29,0);
  if (cVar1 == '\0') {
    puVar4 = local_54;
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,puVar4,0);
    uVar3 = 3;
    if (cVar1 == '\0') {
      puVar4 = local_50;
      cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,puVar4,0);
      if (cVar1 == '\0') {
        puVar4 = local_60;
        cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,puVar4,0);
        uVar3 = 4;
        if (cVar1 == '\0') {
          puVar4 = local_4c;
          cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,puVar4,0);
          uVar3 = 5;
          if (cVar1 == '\0') {
            cVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,local_40,0);
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_48,0);
              if (cVar1 == '\0') {
                uVar3 = 0;
              }
              else {
                uVar3 = FUN_1001705fc(local_48);
              }
            }
            else {
              uVar3 = FUN_1001b8d0c(local_40);
            }
            goto LAB_1001594ce;
          }
        }
      }
    }
    uVar3 = FUN_100171f60(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,uVar3,puVar4);
  }
  else {
    puVar2 = (undefined8 *)PTR__kCFBooleanFalse_10082e030;
    if (local_29 != '\0') {
      puVar2 = (undefined8 *)PTR__kCFBooleanTrue_10082e038;
    }
    uVar3 = *puVar2;
  }
LAB_1001594ce:
  FUN_1001b7a50(local_40);
  return uVar3;
}

