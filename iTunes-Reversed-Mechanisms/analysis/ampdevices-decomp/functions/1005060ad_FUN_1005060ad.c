// name: FUN_1005060ad
// address: 1005060ad

undefined1 FUN_1005060ad(long param_1,uint param_2)

{
  undefined1 uVar1;
  
  if ((char)param_2 < '\0') {
    uVar1 = 0;
  }
  else if ((param_2 >> 0x10 & 1) == 0) {
    if ((~param_2 & 0x8002) == 0) {
      uVar1 = *(undefined1 *)(param_1 + 0x37a);
    }
    else if ((~param_2 & 0x8040) == 0) {
      uVar1 = *(undefined1 *)(param_1 + 0x37b);
    }
    else if ((param_2 & 0x200006) == 2) {
      uVar1 = *(undefined1 *)(param_1 + 0x34e);
    }
    else if ((param_2 & 0x40) == 0) {
      if ((param_2 & 0x20) == 0) {
        if ((param_2 >> 0xe & 1) == 0) {
          if ((param_2 >> 0x18 & 1) == 0) {
            if ((param_2 & 8) == 0) {
              if ((param_2 & 0x10) == 0) {
                if ((param_2 & 0xc00000) == 0) {
                  if ((param_2 >> 0xc & 1) == 0) {
                    if ((param_2 & 0x60000) == 0) {
                      uVar1 = 1;
                    }
                    else {
                      uVar1 = *(undefined1 *)(param_1 + 0x37d);
                    }
                  }
                  else {
                    uVar1 = *(undefined1 *)(param_1 + 0x36a);
                  }
                }
                else {
                  uVar1 = *(undefined1 *)(param_1 + 0x39c);
                }
              }
              else {
                uVar1 = *(undefined1 *)(param_1 + 0x39a);
              }
            }
            else {
              uVar1 = *(undefined1 *)(param_1 + 0x365);
            }
          }
          else {
            uVar1 = *(undefined1 *)(param_1 + 0x377);
          }
        }
        else {
          uVar1 = 1;
          if (*(char *)(param_1 + 0x376) == '\0') {
            uVar1 = *(char *)(param_1 + 0x377) != '\0';
          }
        }
      }
      else {
        uVar1 = *(undefined1 *)(param_1 + 0x350);
      }
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0x34f);
    }
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x39b);
  }
  return uVar1;
}

