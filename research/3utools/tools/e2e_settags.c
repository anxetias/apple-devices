/* Проставить ID3-теги демо-файлам через TagLib C (той же библиотекой,
 * что использует приложение при чтении тегов). */
#include <tag_c.h>
#include <stdio.h>

static int setTags(const char *fname, const char *title, const char *artist,
                   const char *album, const char *genre)
{
  TagLib_File *f = taglib_file_new(fname);
  if (!f || !taglib_file_is_valid(f)) {
    fprintf(stderr, "нет файла/не читается: %s\n", fname);
    return 1;
  }
  TagLib_Tag *t = taglib_file_tag(f);
  taglib_tag_set_title(t, title);
  taglib_tag_set_artist(t, artist);
  taglib_tag_set_album(t, album);
  taglib_tag_set_genre(t, genre);
  int saved = taglib_file_save(f);
  TagLib_AudioProperties *p =
      (TagLib_AudioProperties *)taglib_file_audioproperties(f);
  printf("%s: title=%s bitrate=%d sec=%d (save=%d)\n", fname,
         title, taglib_audioproperties_bitrate(p),
         taglib_audioproperties_length(p), saved);
  taglib_file_free(f);
  return saved ? 0 : 1;
}

int main(void)
{
  if (setTags("demo1.mp3", "UT Song One", "UT Artist", "UT Album", "UT Genre"))
    return 1;
  if (setTags("demo2.mp3", "UT Song Two", "UT Artist", "UT Album", "UT Genre"))
    return 1;
  return 0;
}
