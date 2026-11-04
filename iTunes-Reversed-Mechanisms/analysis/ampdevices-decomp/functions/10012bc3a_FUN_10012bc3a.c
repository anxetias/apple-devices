// name: FUN_10012bc3a
// address: 10012bc3a

undefined8 FUN_10012bc3a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_80 [2];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  long local_50 [2];
  undefined1 local_40 [8];
  cfstringStruct *local_38;
  
  local_70 = param_3;
  local_58 = param_1;
  FUN_1001a7a9e(local_80,*param_2);
  if (local_80[0] != 0) {
    local_38 = &cf__;
    FUN_1001a8c1c(local_50);
    FUN_1001ab17c(local_68,local_70,local_50);
    FUN_1001ab006(local_50);
    lVar2 = FUN_1001a7bfa(local_68);
    if (lVar2 != 0) {
      uVar3 = FUN_1001a7bfa(local_68);
      if (1 < uVar3) {
        lVar2 = FUN_1001a7bfa(local_68);
        if (lVar2 != 1) {
          lVar5 = 0;
          do {
            FUN_10012bf62(local_50,local_68,lVar5);
            FUN_10012beac(&local_38,local_80,local_50);
            FUN_1001ab006(local_50);
            cVar1 = FUN_1001ab2fa(&local_38);
            if (cVar1 == '\0') {
              FUN_10032f0f2(local_50);
              FUN_10012c632(local_58,local_50,local_70);
              FUN_1001a8fac(local_50);
              FUN_1001ab240(&local_38);
              goto LAB_10012bd92;
            }
            FUN_1001a8fb6(local_50,&local_38);
            FUN_1001a7b1c(local_80,local_50);
            FUN_1001a8fac(local_50);
            FUN_1001ab240(&local_38);
            lVar5 = lVar5 + 1;
          } while (lVar2 + -1 != lVar5);
        }
      }
      lVar2 = FUN_1001a7bfa(local_68);
      FUN_10012bf62(&local_38,local_68,lVar2 + -1);
      FUN_10012c668(local_50,local_80,&local_38);
      FUN_10012c69e(local_58,local_50);
      FUN_1001ab006(local_40);
      FUN_1001a8fac(local_50);
      FUN_1001ab006(&local_38);
LAB_10012bd92:
      FUN_1001a7a94(local_68);
      plVar4 = local_80;
      goto LAB_10012bdd3;
    }
    FUN_1001a7a94(local_68);
  }
  FUN_1001a8fac(local_80);
  FUN_10032f0f2(local_50);
  FUN_10012c632(local_58,local_50,local_70);
  plVar4 = local_50;
LAB_10012bdd3:
  FUN_1001a8fac(plVar4);
  return local_58;
}

