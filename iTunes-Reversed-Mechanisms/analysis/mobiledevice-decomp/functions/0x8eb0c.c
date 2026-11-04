// rea decompile_all
// name: _deflate
// address: 0x8eb0c
// body: available
// range: 0x8eb0c-0x8f476 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflate(z_streamp strm,int flush)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  internal_state *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  uLong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uInt uVar19;
  uint uVar20;
  
  if (strm == (z_streamp)0x0) {
    return -2;
  }
  piVar6 = strm->state;
  if (5 < (uint)flush || piVar6 == (internal_state *)0x0) {
    return -2;
  }
  if ((strm->next_out == (Bytef *)0x0) ||
     (((strm->next_in == (Bytef *)0x0 && (strm->avail_in != 0)) ||
      (iVar17 = piVar6[2].dummy, flush != 4 && iVar17 == 0x29a)))) {
    strm->msg = "stream error";
    return -2;
  }
  if (strm->avail_out == 0) {
LAB_0008f20a:
    strm->msg = "buffer error";
    iVar17 = -5;
  }
  else {
    *(z_streamp *)piVar6 = strm;
    iVar3 = piVar6[0x10].dummy;
    piVar6[0x10].dummy = flush;
    if (iVar17 == 0x2a) {
      if (piVar6[0xb].dummy != 2) {
        uVar13 = piVar6[0x12].dummy * 0x1000 - 0x7800;
        uVar20 = 0;
        if ((piVar6[0x2e].dummy < 2) && (uVar5 = piVar6[0x2d].dummy, 1 < (int)uVar5)) {
          uVar20 = 0x40;
          if (5 < uVar5) {
            uVar20 = (uVar5 != 6 | 2) << 6;
          }
        }
        uVar5 = uVar20 + 0x20 + uVar13;
        if (piVar6[0x27].dummy == 0) {
          uVar5 = uVar20 | uVar13;
        }
        piVar6[2].dummy = 0x71;
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(char *)(lVar15 + (ulong)uVar13) = (char)(uVar5 >> 8);
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(byte *)(lVar15 + (ulong)uVar13) =
             (((char)(uVar5 / 0x1f) - (char)(uVar5 / 0x1f << 5)) + (byte)uVar5 | (byte)uVar5) ^ 0x1f
        ;
        if (piVar6[0x27].dummy != 0) {
          uVar1 = *(undefined1 *)((long)&strm->adler + 2);
          uVar2 = *(undefined1 *)((long)&strm->adler + 3);
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar2;
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
          uVar14 = strm->adler;
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(char *)(lVar15 + (ulong)uVar13) = (char)(uVar14 >> 8);
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(char *)(lVar15 + (ulong)uVar13) = (char)uVar14;
        }
        uVar14 = _adler32(0,(Bytef *)0x0,0);
        strm->adler = uVar14;
        iVar17 = piVar6[2].dummy;
        goto LAB_0008ee66;
      }
      uVar14 = _crc32(0,(Bytef *)0x0,0);
      strm->adler = uVar14;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0x1f;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0x8b;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 8;
      piVar7 = *(int **)(piVar6 + 0xc);
      if (piVar7 != (int *)0x0) {
        iVar17 = *piVar7;
        iVar4 = piVar7[0x11];
        lVar15 = *(long *)(piVar7 + 6);
        lVar8 = *(long *)(piVar7 + 10);
        lVar9 = *(long *)(piVar7 + 0xe);
        lVar10 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(char *)(lVar10 + (ulong)uVar13) =
             (lVar9 != 0) << 4 |
             (lVar8 != 0) << 3 | (lVar15 != 0) << 2 | (iVar4 != 0) * '\x02' | iVar17 != 0;
        uVar1 = *(undefined1 *)(*(long *)(piVar6 + 0xc) + 8);
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
        uVar1 = *(undefined1 *)(*(long *)(piVar6 + 0xc) + 9);
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
        uVar1 = *(undefined1 *)(*(long *)(piVar6 + 0xc) + 10);
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
        uVar1 = *(undefined1 *)(*(long *)(piVar6 + 0xc) + 0xb);
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
        cVar12 = '\x02';
        if (piVar6[0x2d].dummy != 9) {
          cVar12 = (piVar6[0x2d].dummy < 2 || 1 < piVar6[0x2e].dummy) << 2;
        }
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(char *)(lVar15 + (ulong)uVar13) = cVar12;
        uVar1 = *(undefined1 *)(*(long *)(piVar6 + 0xc) + 0x14);
        lVar15 = *(long *)(piVar6 + 4);
        uVar13 = piVar6[10].dummy;
        piVar6[10].dummy = uVar13 + 1;
        *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
        lVar15 = *(long *)(piVar6 + 0xc);
        if (*(long *)(lVar15 + 0x18) != 0) {
          uVar1 = *(undefined1 *)(lVar15 + 0x20);
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
          uVar1 = *(undefined1 *)(*(long *)(piVar6 + 0xc) + 0x21);
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
          lVar15 = *(long *)(piVar6 + 0xc);
        }
        if (*(int *)(lVar15 + 0x44) != 0) {
          uVar14 = _crc32(strm->adler,*(Bytef **)(piVar6 + 4),piVar6[10].dummy);
          strm->adler = uVar14;
        }
        piVar6[0xe].dummy = 0;
        piVar6[2].dummy = 0x45;
        goto LAB_0008ee6f;
      }
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 0;
      cVar12 = '\x02';
      if (piVar6[0x2d].dummy != 9) {
        cVar12 = (piVar6[0x2d].dummy < 2 || 1 < piVar6[0x2e].dummy) << 2;
      }
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(char *)(lVar15 + (ulong)uVar13) = cVar12;
      lVar15 = *(long *)(piVar6 + 4);
      uVar13 = piVar6[10].dummy;
      piVar6[10].dummy = uVar13 + 1;
      *(undefined1 *)(lVar15 + (ulong)uVar13) = 7;
LAB_0008f1c4:
      piVar6[2].dummy = 0x71;
    }
    else {
LAB_0008ee66:
      if (iVar17 == 0x45) {
LAB_0008ee6f:
        lVar15 = *(long *)(piVar6 + 0xc);
        if (*(long *)(lVar15 + 0x18) != 0) {
          uVar13 = piVar6[10].dummy;
          uVar20 = piVar6[0xe].dummy;
          while (uVar20 < *(ushort *)(lVar15 + 0x20)) {
            uVar5 = piVar6[10].dummy;
            uVar16 = (ulong)uVar5;
            if (*(ulong *)(piVar6 + 6) == uVar16) {
              if ((*(int *)(lVar15 + 0x44) != 0) && (uVar13 <= uVar5 && uVar5 - uVar13 != 0)) {
                uVar14 = _crc32(strm->adler,(Bytef *)((ulong)uVar13 + *(long *)(piVar6 + 4)),
                                uVar5 - uVar13);
                strm->adler = uVar14;
              }
              _flush_pending();
              uVar13 = piVar6[10].dummy;
              uVar16 = (ulong)uVar13;
              lVar15 = *(long *)(piVar6 + 0xc);
              if (*(ulong *)(piVar6 + 6) == uVar16) break;
              uVar20 = piVar6[0xe].dummy;
            }
            uVar1 = *(undefined1 *)(*(long *)(lVar15 + 0x18) + (ulong)uVar20);
            lVar15 = *(long *)(piVar6 + 4);
            piVar6[10].dummy = (int)uVar16 + 1;
            *(undefined1 *)(lVar15 + uVar16) = uVar1;
            uVar20 = piVar6[0xe].dummy + 1;
            piVar6[0xe].dummy = uVar20;
            lVar15 = *(long *)(piVar6 + 0xc);
          }
          if ((*(int *)(lVar15 + 0x44) != 0) &&
             (uVar19 = piVar6[10].dummy - uVar13, uVar13 <= (uint)piVar6[10].dummy && uVar19 != 0))
          {
            uVar14 = _crc32(strm->adler,(Bytef *)((ulong)uVar13 + *(long *)(piVar6 + 4)),uVar19);
            strm->adler = uVar14;
            lVar15 = *(long *)(piVar6 + 0xc);
          }
          if (piVar6[0xe].dummy != *(int *)(lVar15 + 0x20)) {
            iVar17 = piVar6[2].dummy;
            goto LAB_0008efd4;
          }
          piVar6[0xe].dummy = 0;
        }
        piVar6[2].dummy = 0x49;
LAB_0008efe1:
        if (*(long *)(lVar15 + 0x28) != 0) {
          uVar13 = piVar6[10].dummy;
          do {
            uVar20 = piVar6[10].dummy;
            uVar16 = (ulong)uVar20;
            lVar15 = *(long *)(piVar6 + 0xc);
            if (*(ulong *)(piVar6 + 6) == uVar16) {
              if ((*(int *)(lVar15 + 0x44) != 0) && (uVar13 <= uVar20 && uVar20 - uVar13 != 0)) {
                uVar14 = _crc32(strm->adler,(Bytef *)((ulong)uVar13 + *(long *)(piVar6 + 4)),
                                uVar20 - uVar13);
                strm->adler = uVar14;
              }
              _flush_pending();
              uVar13 = piVar6[10].dummy;
              uVar16 = (ulong)uVar13;
              if (*(ulong *)(piVar6 + 6) == uVar16) {
                bVar11 = false;
                goto LAB_0008f05c;
              }
              lVar15 = *(long *)(piVar6 + 0xc);
            }
            lVar15 = *(long *)(lVar15 + 0x28);
            uVar20 = piVar6[0xe].dummy;
            piVar6[0xe].dummy = uVar20 + 1;
            cVar12 = *(char *)(lVar15 + (ulong)uVar20);
            lVar15 = *(long *)(piVar6 + 4);
            piVar6[10].dummy = (int)uVar16 + 1;
            *(char *)(lVar15 + uVar16) = cVar12;
          } while (cVar12 != '\0');
          bVar11 = true;
          uVar16 = (ulong)uVar13;
LAB_0008f05c:
          if ((*(int *)(*(long *)(piVar6 + 0xc) + 0x44) != 0) &&
             (uVar19 = piVar6[10].dummy - (uint)uVar16,
             (uint)uVar16 <= (uint)piVar6[10].dummy && uVar19 != 0)) {
            uVar14 = _crc32(strm->adler,(Bytef *)(uVar16 + *(long *)(piVar6 + 4)),uVar19);
            strm->adler = uVar14;
          }
          if (!bVar11) {
            iVar17 = piVar6[2].dummy;
            goto LAB_0008f09a;
          }
          piVar6[0xe].dummy = 0;
        }
        piVar6[2].dummy = 0x5b;
LAB_0008f0a3:
        if (*(long *)(*(long *)(piVar6 + 0xc) + 0x38) != 0) {
          uVar13 = piVar6[10].dummy;
          do {
            uVar20 = piVar6[10].dummy;
            uVar16 = (ulong)uVar20;
            lVar15 = *(long *)(piVar6 + 0xc);
            if (*(ulong *)(piVar6 + 6) == uVar16) {
              if ((*(int *)(lVar15 + 0x44) != 0) && (uVar13 <= uVar20 && uVar20 - uVar13 != 0)) {
                uVar14 = _crc32(strm->adler,(Bytef *)((ulong)uVar13 + *(long *)(piVar6 + 4)),
                                uVar20 - uVar13);
                strm->adler = uVar14;
              }
              _flush_pending();
              uVar13 = piVar6[10].dummy;
              uVar16 = (ulong)uVar13;
              if (*(ulong *)(piVar6 + 6) == uVar16) {
                bVar11 = false;
                goto LAB_0008f122;
              }
              lVar15 = *(long *)(piVar6 + 0xc);
            }
            lVar15 = *(long *)(lVar15 + 0x38);
            uVar20 = piVar6[0xe].dummy;
            piVar6[0xe].dummy = uVar20 + 1;
            cVar12 = *(char *)(lVar15 + (ulong)uVar20);
            lVar15 = *(long *)(piVar6 + 4);
            piVar6[10].dummy = (int)uVar16 + 1;
            *(char *)(lVar15 + uVar16) = cVar12;
          } while (cVar12 != '\0');
          bVar11 = true;
          uVar16 = (ulong)uVar13;
LAB_0008f122:
          if ((*(int *)(*(long *)(piVar6 + 0xc) + 0x44) != 0) &&
             (uVar19 = piVar6[10].dummy - (uint)uVar16,
             (uint)uVar16 <= (uint)piVar6[10].dummy && uVar19 != 0)) {
            uVar14 = _crc32(strm->adler,(Bytef *)(uVar16 + *(long *)(piVar6 + 4)),uVar19);
            strm->adler = uVar14;
          }
          if (!bVar11) {
            iVar17 = piVar6[2].dummy;
            goto LAB_0008f159;
          }
        }
        piVar6[2].dummy = 0x67;
LAB_0008f15e:
        if (*(int *)(*(long *)(piVar6 + 0xc) + 0x44) != 0) {
          uVar13 = piVar6[10].dummy;
          uVar18 = (ulong)(uVar13 + 2);
          uVar16 = *(ulong *)(piVar6 + 6);
          if (uVar16 < uVar18) {
            _flush_pending();
            uVar13 = piVar6[10].dummy;
            uVar16 = *(ulong *)(piVar6 + 6);
            uVar18 = (ulong)(uVar13 + 2);
          }
          if (uVar16 < uVar18) goto LAB_0008f1cb;
          uVar14 = strm->adler;
          lVar15 = *(long *)(piVar6 + 4);
          piVar6[10].dummy = uVar13 + 1;
          *(char *)(lVar15 + (ulong)uVar13) = (char)uVar14;
          uVar1 = *(undefined1 *)((long)&strm->adler + 1);
          lVar15 = *(long *)(piVar6 + 4);
          uVar13 = piVar6[10].dummy;
          piVar6[10].dummy = uVar13 + 1;
          *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
          uVar14 = _crc32(0,(Bytef *)0x0,0);
          strm->adler = uVar14;
        }
        goto LAB_0008f1c4;
      }
LAB_0008efd4:
      if (iVar17 == 0x49) {
        lVar15 = *(long *)(piVar6 + 0xc);
        goto LAB_0008efe1;
      }
LAB_0008f09a:
      if (iVar17 == 0x5b) goto LAB_0008f0a3;
LAB_0008f159:
      if (iVar17 == 0x67) goto LAB_0008f15e;
    }
LAB_0008f1cb:
    if (piVar6[10].dummy == 0) {
      if (((strm->avail_in == 0) && (flush != 4)) && (flush <= iVar3)) goto LAB_0008f20a;
LAB_0008f1e4:
      if (piVar6[2].dummy == 0x29a) {
        if (strm->avail_in != 0) goto LAB_0008f20a;
LAB_0008f227:
        if (piVar6[0x29].dummy != 0) goto LAB_0008f234;
        if (flush != 0) {
          if (piVar6[2].dummy != 0x29a) goto LAB_0008f234;
          goto LAB_0008f33d;
        }
      }
      else {
        if (strm->avail_in == 0) goto LAB_0008f227;
LAB_0008f234:
        if (piVar6[0x2e].dummy == 3) {
          uVar13 = _deflate_rle(piVar6,flush);
        }
        else if (piVar6[0x2e].dummy == 2) {
          uVar13 = _deflate_huff(piVar6,flush);
        }
        else {
          uVar13 = (**(code **)(&DAT_00443fd8 + (long)piVar6[0x2d].dummy * 0x10))(piVar6,flush);
        }
        if ((uVar13 & 0xfffffffe) == 2) {
          piVar6[2].dummy = 0x29a;
        }
        if ((uVar13 & 0xfffffffd) == 0) {
          if (strm->avail_out != 0) {
            return 0;
          }
          piVar6[0x10].dummy = -1;
          return 0;
        }
        if (uVar13 == 1) {
          if (flush != 5) {
            if (flush == 1) {
              __tr_align();
            }
            else {
              __tr_stored_block(piVar6,0,0,0);
              if (flush == 3) {
                lVar15 = *(long *)(piVar6 + 0x1a);
                uVar16 = (ulong)(piVar6[0x1d].dummy - 1);
                *(undefined2 *)(lVar15 + uVar16 * 2) = 0;
                ___bzero(lVar15,uVar16 * 2);
                if (piVar6[0x29].dummy == 0) {
                  piVar6[0x27].dummy = 0;
                  *(undefined8 *)(piVar6 + 0x22) = 0;
                }
              }
            }
          }
          _flush_pending(strm);
          if (strm->avail_out == 0) goto LAB_0008f3f1;
        }
LAB_0008f33d:
        if (flush == 4) {
          if (0 < piVar6[0xb].dummy) {
            uVar14 = strm->adler;
            if (piVar6[0xb].dummy == 2) {
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(char *)(lVar15 + (ulong)uVar13) = (char)uVar14;
              uVar1 = *(undefined1 *)((long)&strm->adler + 1);
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
              uVar1 = *(undefined1 *)((long)&strm->adler + 2);
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
              uVar1 = *(undefined1 *)((long)&strm->adler + 3);
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
              uVar14 = strm->total_in;
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(char *)(lVar15 + (ulong)uVar13) = (char)uVar14;
              uVar1 = *(undefined1 *)((long)&strm->total_in + 1);
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
              uVar1 = *(undefined1 *)((long)&strm->total_in + 2);
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(undefined1 *)(lVar15 + (ulong)uVar13) = uVar1;
              uVar16 = strm->total_in >> 0x18;
            }
            else {
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(char *)(lVar15 + (ulong)uVar13) = (char)(uVar14 >> 0x18);
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(char *)(lVar15 + (ulong)uVar13) = (char)(uVar14 >> 0x10);
              uVar16 = strm->adler;
              lVar15 = *(long *)(piVar6 + 4);
              uVar13 = piVar6[10].dummy;
              piVar6[10].dummy = uVar13 + 1;
              *(char *)(lVar15 + (ulong)uVar13) = (char)(uVar16 >> 8);
            }
            lVar15 = *(long *)(piVar6 + 4);
            uVar13 = piVar6[10].dummy;
            piVar6[10].dummy = uVar13 + 1;
            *(char *)(lVar15 + (ulong)uVar13) = (char)uVar16;
            _flush_pending(strm);
            if (0 < piVar6[0xb].dummy) {
              piVar6[0xb].dummy = -piVar6[0xb].dummy;
            }
            return (uint)(piVar6[10].dummy == 0);
          }
          return 1;
        }
      }
    }
    else {
      _flush_pending(strm);
      if (strm->avail_out != 0) goto LAB_0008f1e4;
LAB_0008f3f1:
      piVar6[0x10].dummy = -1;
    }
    iVar17 = 0;
  }
  return iVar17;
}

