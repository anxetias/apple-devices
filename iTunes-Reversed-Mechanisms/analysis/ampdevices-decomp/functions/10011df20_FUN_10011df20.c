// name: FUN_10011df20
// address: 10011df20

undefined8 FUN_10011df20(long *param_1,long param_2,long param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  (**(code **)(*param_1 + 0x60))();
  bVar4 = *(char *)((long)param_1 + 0xa9) + 4U & 0x1f;
  *(char *)((long)param_1 + 0xaa) = (char)(param_4 >> bVar4);
  cVar1 = *(char *)(param_3 + 0x1414);
  *(char *)(param_1 + 0x15) = cVar1;
  param_1[0x14] = param_3;
  if (cVar1 != '\0') {
    lVar7 = 0;
    uVar8 = (ulong)(0 >> bVar4);
    do {
      (**(code **)(*param_1 + 0x28))
                (param_1,*(undefined4 *)(param_2 + 0x680),uVar8 & 0xffffffff,(int)param_1[0x1826]);
      iVar5 = (**(code **)(*param_1 + 0x50))(param_1,param_1[uVar8 + 0xf]);
      if (iVar5 != 0) {
        return 0xfffffffe;
      }
      puVar2 = (undefined4 *)param_1[uVar8 + 0xf];
      *(undefined2 *)(*(long *)(puVar2 + 6) + 10) = 0x2020;
      *puVar2 = 1;
      lVar3 = param_1[0x14];
      cVar1 = *(char *)(lVar3 + 1 + lVar7);
      if (cVar1 != '\x03') {
        if (cVar1 == '\x01') {
          bVar4 = *(byte *)(lVar3 + lVar7);
          (**(code **)(*param_1 + 0x58))
                    (param_1,param_1 + (ulong)bVar4 * 0x23 + 0x167d,
                     *(undefined1 *)((long)param_1 + 0xaa));
          uVar6 = (ulong)bVar4 + 1;
        }
        else {
          if (cVar1 != '\0') {
            return 0xfffffffe;
          }
          uVar6 = (ulong)*(byte *)(lVar3 + lVar7);
        }
        (**(code **)(*param_1 + 0x58))
                  (param_1,param_1 + uVar6 * 0x23 + 0x167d,*(undefined1 *)((long)param_1 + 0xaa));
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x404;
    } while (uVar8 < *(byte *)(param_1 + 0x15));
  }
  return 0;
}

