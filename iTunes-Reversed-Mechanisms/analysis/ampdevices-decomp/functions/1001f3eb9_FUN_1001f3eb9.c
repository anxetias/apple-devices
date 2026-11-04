// name: FUN_1001f3eb9
// address: 1001f3eb9

int FUN_1001f3eb9(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006c8687(uVar7);
    }
  }
  else if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006c8611(uVar7);
    }
  }
  else {
    if (param_3 != 0) {
      iVar3 = FUN_1001f3964(param_1);
      if (iVar3 == -0x80) {
        return -0x80;
      }
      if (iVar3 != 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 == '\0') {
          return iVar3;
        }
        FUN_1006c852f(iVar3,uVar7);
        return iVar3;
      }
      lVar5 = FUN_10017076e(param_3);
      if (0 < lVar5) {
        lVar8 = 0;
        do {
          lVar6 = FUN_100164a01(param_3,lVar8);
          if (lVar6 == 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              FUN_1006c84b9(uVar7);
            }
            goto LAB_1001f40ac;
          }
          uVar4 = FUN_1001737f8(lVar6);
          iVar3 = FUN_1001f316f(param_1,uVar4);
          if (iVar3 != 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c8159(iVar3,uVar7);
            return iVar3;
          }
          iVar3 = FUN_1001e5ca8(lVar6,*(undefined8 *)(param_1 + 2),(uint)param_1[4] >> 1,&local_34);
          if (iVar3 != 0) {
            if (iVar3 == -0x80) {
              return -0x80;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c844d(iVar3,uVar7);
            return iVar3;
          }
          iVar3 = FUN_1001e73f2(*(undefined8 *)(param_1 + 2),local_34,*(undefined8 *)(param_1 + 6),
                                param_1[8],&local_40);
          if (iVar3 != 0) {
            if (iVar3 == -0x80) {
              return -0x80;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c83e1(iVar3,uVar7);
            return iVar3;
          }
          uVar1 = param_1[1];
          if (uVar1 != 0) {
            if (0xf < uVar1) {
              uVar1 = 0x10;
            }
            iVar3 = (**(code **)(param_1 + 0x10))
                              (param_1,"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t",uVar1,
                               *(undefined8 *)(param_1 + 0x12));
            if (iVar3 != 0) {
              if (iVar3 == -0x80) {
                return -0x80;
              }
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 == '\0') {
                return iVar3;
              }
              FUN_1006c81c5(iVar3,uVar7);
              return iVar3;
            }
          }
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,"<string>",8,*(undefined8 *)(param_1 + 0x12));
          if (iVar3 != 0) {
            if (iVar3 == -0x80) {
              return -0x80;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c8375(iVar3,uVar7);
            return iVar3;
          }
          FUN_1001f21b4(*(undefined8 *)(param_1 + 6),CONCAT44(uStack_3c,local_40),
                        *(undefined8 *)(param_1 + 10),param_1[0xc],&local_40,0);
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,*(undefined8 *)(param_1 + 10),local_40,
                             *(undefined8 *)(param_1 + 0x12));
          if (iVar3 != 0) {
            if (iVar3 == -0x80) {
              return -0x80;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c8309(iVar3,uVar7);
            return iVar3;
          }
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,"</string>\n",10,*(undefined8 *)(param_1 + 0x12));
          if (iVar3 != 0) {
            if (iVar3 == -0x80) {
              return -0x80;
            }
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c829d(iVar3,uVar7);
            return iVar3;
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
      }
      iVar3 = FUN_1001f3dbb(param_1,"</array>");
      if (iVar3 == -0x80) {
        return -0x80;
      }
      if (iVar3 == 0) {
        return 0;
      }
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 == '\0') {
        return iVar3;
      }
      FUN_1006c8231(iVar3,uVar7);
      return iVar3;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006c859b(uVar7);
    }
  }
LAB_1001f40ac:
  FUN_1001782e9(0,0);
  return -0x32;
}

