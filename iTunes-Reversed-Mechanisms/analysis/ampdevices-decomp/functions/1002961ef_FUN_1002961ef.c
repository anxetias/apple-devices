// name: FUN_1002961ef
// address: 1002961ef

undefined8 FUN_1002961ef(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int in_stack_00000008;
  long in_stack_00000018;
  int in_stack_00000020;
  undefined1 local_3c [4];
  int local_38;
  uint local_34;
  
  if (in_stack_00000008 < 0x54454e20) {
    if (in_stack_00000008 < 0x434f4d4d) {
      if ((in_stack_00000008 != 0x434f4d00) && (in_stack_00000008 != 0x434f4d20)) {
        return 0;
      }
    }
    else if (in_stack_00000008 != 0x434f4d4d) {
      if (in_stack_00000008 != 0x54454e00) {
        return 0;
      }
      goto LAB_1002962f5;
    }
    cVar1 = FUN_100427fb0(in_stack_00000018,in_stack_00000020,&local_38,&local_34);
    if (cVar1 == '\0') {
      cVar1 = FUN_100427ed5(in_stack_00000018,in_stack_00000020);
      if ((cVar1 != '\0') && (*(char *)(param_2 + 0x179) == '\0')) {
        FUN_100427e75(param_1 + 4,in_stack_00000018,in_stack_00000020,(undefined1 *)(param_2 + 0x79)
                      ,0xff);
        if (*(char *)(param_2 + 0x79) == '\0') {
          FUN_100428138(param_1 + 4,in_stack_00000018,in_stack_00000020,param_2 + 0x7a,0xfe,local_3c
                       );
          *(undefined1 *)(param_2 + 0x79) = local_3c[0];
        }
        iVar2 = _strncmp((char *)(param_2 + 0x7a),"MusicMatch",10);
        if ((iVar2 == 0) || (iVar2 = _strncmp((char *)(param_2 + 0x7a),"Amazon.com",10), iVar2 == 0)
           ) {
          *(undefined1 *)(param_2 + 0x79) = 10;
          *(undefined1 *)(param_2 + 0x179) = 1;
        }
        else {
          *(undefined1 *)(param_2 + 0x79) = 0;
        }
      }
    }
    else if (local_38 == 0x534d5042) {
      iVar2 = FUN_1003a9464(in_stack_00000018 + (int)local_34,~local_34 + in_stack_00000020,param_2)
      ;
      *(bool *)(param_2 + 0x40) = iVar2 == 0;
    }
    else if (local_38 == 0x4e4f524d) {
      iVar2 = FUN_1003a92b4(in_stack_00000018 + (int)local_34,~local_34 + in_stack_00000020,
                            param_2 + 0x44);
      *(bool *)(param_2 + 0x78) = iVar2 == 0;
    }
  }
  else {
    if (0x545352ff < in_stack_00000008) {
      if (((in_stack_00000008 != 0x54535300) && (in_stack_00000008 != 0x54535320)) &&
         (in_stack_00000008 != 0x54535345)) {
        return 0;
      }
      FUN_1004272d9(param_1 + 4,in_stack_00000018,in_stack_00000020,param_2 + 0x17a,0xff);
      *(bool *)(param_2 + 0x27a) = *(char *)(param_2 + 0x17a) != '\0';
      return 0;
    }
    if ((in_stack_00000008 != 0x54454e20) && (in_stack_00000008 != 0x54454e43)) {
      return 0;
    }
LAB_1002962f5:
    FUN_1004272d9(param_1 + 4,in_stack_00000018,in_stack_00000020,param_2 + 0x79,0xff);
    *(bool *)(param_2 + 0x179) = *(char *)(param_2 + 0x79) != '\0';
  }
  return 0;
}

