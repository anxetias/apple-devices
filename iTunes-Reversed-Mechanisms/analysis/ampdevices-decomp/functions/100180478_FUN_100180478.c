// name: FUN_100180478
// address: 100180478

int FUN_100180478(long param_1,long param_2,int *param_3,long param_4,long param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100688248(uVar3);
    }
  }
  else if (((param_3 == (int *)0x0) || (*(long *)(param_3 + 4) == 0)) ||
          ((*param_3 != 0x41464350 && (*param_3 != 0x504f5358)))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006881d2(uVar3);
    }
  }
  else if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068815c(uVar3);
    }
  }
  else {
    if ((param_6 & 2) != 0) {
      cVar1 = FUN_1001ee056();
      if (cVar1 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100687eb6(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      cVar1 = FUN_1001ee068();
      if (cVar1 == '\0') {
        param_6 = param_6 & 0xfffffffd;
      }
    }
    if ((param_6 & 2) == 0) {
      iVar2 = FUN_1001807b8(param_1,param_2,param_3,param_4,param_5,param_6);
      return iVar2;
    }
    cVar1 = FUN_1001ee068();
    if (cVar1 != '\0') {
      plVar4 = (long *)FUN_1001c6429(0x40);
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4 + 6;
        iVar2 = FUN_1001e96d3(plVar5,0,0);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            *plVar4 = param_1;
            plVar4[1] = param_2;
            plVar4[2] = (long)param_3;
            plVar4[3] = param_4;
            plVar4[4] = param_5;
            *(uint *)(plVar4 + 5) = param_6;
            *(undefined4 *)((long)plVar4 + 0x2c) = 1;
            iVar2 = FUN_1001ee6ff(FUN_10018a8b2,plVar4,7,0,0,"");
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                iVar2 = FUN_1001e9afc(plVar5);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    FUN_100687fa2(iVar2,uVar3);
                  }
                }
              }
              else {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  FUN_10068800e(iVar2,uVar3);
                }
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_10068807a(iVar2,uVar3);
            }
          }
        }
        FUN_1001e9bb5(plVar5);
        FUN_1001c64c1(plVar4);
        return iVar2;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006880e6(uVar3);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100687f2c(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

