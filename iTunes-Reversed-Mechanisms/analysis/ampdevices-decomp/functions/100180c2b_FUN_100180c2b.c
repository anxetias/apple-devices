// name: FUN_100180c2b
// address: 100180c2b

int FUN_100180c2b(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068888a(uVar3);
    }
  }
  else {
    if ((param_6 & 1) != 0) {
      cVar1 = FUN_1001ee056();
      if (cVar1 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006885e4(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      cVar1 = FUN_1001ee068();
      if (cVar1 == '\0') {
        param_6 = param_6 & 0xfffffffe;
      }
    }
    if ((param_6 & 1) == 0) {
      iVar2 = FUN_10018a8ec(param_1,param_2,param_3,param_4,param_5,param_6);
      return iVar2;
    }
    cVar1 = FUN_1001ee068();
    if (cVar1 != '\0') {
      puVar4 = (undefined8 *)FUN_1001c6429(0x40);
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = puVar4 + 6;
        iVar2 = FUN_1001e96d3(puVar5,0,0);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            *puVar4 = param_1;
            puVar4[1] = param_2;
            puVar4[2] = param_3;
            puVar4[3] = param_4;
            puVar4[4] = param_5;
            *(uint *)(puVar4 + 5) = param_6;
            *(undefined4 *)((long)puVar4 + 0x2c) = 1;
            iVar2 = FUN_1001ee6ff(FUN_10018aad2,puVar4,7,0,0,"");
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                iVar2 = FUN_1001e9afc(puVar5);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_1006886d0(iVar2,uVar3);
                  }
                }
              }
              else {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  FUN_10068873c(iVar2,uVar3);
                }
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006887a8(iVar2,uVar3);
            }
          }
        }
        FUN_1001e9bb5(puVar5);
        FUN_1001c64c1(puVar4);
        return iVar2;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100688814(uVar3);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068865a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

