// name: FUN_10042ae71
// address: 10042ae71

undefined4 FUN_10042ae71(long param_1,int param_2,undefined1 *param_3)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *plVar7;
  undefined4 local_34;
  
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    local_34 = 0xffffffd5;
  }
  else {
    local_34 = 0xffffffd5;
    plVar7 = *(long **)(param_1 + 0x28);
    do {
      plVar1 = (long *)*plVar7;
      if ((int)plVar7[1] == param_2) {
        cVar3 = *(char *)((long)plVar7 + 0x12);
        cVar2 = FUN_100427e21((long)plVar7 + 0x13);
        if (cVar2 != '\0') {
          if ((cVar3 == '\x03') || (cVar3 == '\0')) {
            lVar4 = 0;
            do {
              if (*(char *)((long)plVar7 + 0x16 + lVar4) == '\0') {
                if (param_3 == (undefined1 *)0x0 && (int)lVar4 == 0) goto LAB_10042af32;
                break;
              }
              lVar4 = lVar4 + 1;
            } while ((int)lVar4 < *(int *)((long)plVar7 + 0xc));
            if ((param_3 != (undefined1 *)0x0) &&
               (cVar3 = FUN_1001df8db(param_3 + 1,*param_3,(long)plVar7 + 0x16,(long)(int)lVar4,0),
               cVar3 != '\0')) {
LAB_10042af32:
              *(int *)(param_1 + 0xe) =
                   *(int *)(param_1 + 0xe) -
                   (*(int *)(param_1 + 0x20) + *(int *)((long)plVar7 + 0xc));
              FUN_1001c2502(param_1 + 0x28,plVar7);
              FUN_1001c64c1(plVar7);
              local_34 = 0;
            }
          }
          else if (((byte)(cVar3 - 1U) < 2) && (7 < *(int *)((long)plVar7 + 0xc))) {
            plVar5 = (long *)((long)plVar7 + 0x16);
            uVar6 = *(int *)((long)plVar7 + 0xc) - 4U >> 1;
            if ((cVar3 == '\x01') && ((*(short *)plVar5 == -2 || (*(short *)plVar5 == -0x101)))) {
              plVar5 = plVar7 + 3;
              uVar6 = uVar6 - 1;
            }
            lVar4 = 0;
            do {
              if (*(short *)((long)plVar5 + lVar4 * 2) == 0) {
                if ((int)lVar4 == 0 && param_3 == (undefined1 *)0x0) goto LAB_10042af32;
                break;
              }
              lVar4 = lVar4 + 1;
            } while (uVar6 != (uint)lVar4);
          }
        }
      }
      plVar7 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return local_34;
}

