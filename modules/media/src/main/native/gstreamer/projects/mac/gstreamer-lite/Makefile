#
# MacOs gstreamer-lite Makefile
#

BUILD_DIR = $(OUTPUT_DIR)/$(BUILD_TYPE)
TARGET_DIRS = $(BUILD_DIR)

BASE_DIR = ../../..

GLIB_VERSION = 2.28.8
GLIB_DIR = $(BASE_DIR)/3rd_party/glib/glib-$(GLIB_VERSION)

SRCBASE_DIR = $(BASE_DIR)/gstreamer-lite
OBJBASE_DIR = $(BUILD_DIR)/obj/gstreamer-lite

DIRLIST = gstreamer/gst                     \
	  gstreamer/libs/gst/base \
          gstreamer/libs/gst/controller \
          gst-plugins-base/gst-libs/gst/audio \
	  gst-plugins-base/gst-libs/gst/interfaces \
	  gst-plugins-base/gst-libs/gst/video \
	  gst-plugins-base/gst-libs/gst/pbutils \
          gst-plugins-base/gst-libs/gst/tag \
	  gst-plugins-base/gst-libs/gst/riff \
	  gst-plugins-base/gst-libs/gst/fft \
	  gst-plugins-base/gst-libs/gst/app \
	  projects/plugins                  \
	  gstreamer/plugins/elements \
          gst-plugins-base/gst/typefind \
	  gst-plugins-base/gst/audioconvert \
          gst-plugins-good/gst/audioparsers \
	  gst-plugins-good/gst/isomp4 \
	  gst-plugins-good/gst/audiofx \
	  gst-plugins-good/gst/equalizer \
	  gst-plugins-good/gst/spectrum \
	  gst-plugins-good/gst/wavparse \
	  gst-plugins-bad/gst/aiff \
	  gst-plugins-base/gst/app \
          gst-plugins-good/sys/osxaudio

TARGET_NAME = lib$(BASE_NAME).dylib
TARGET = $(BUILD_DIR)/$(TARGET_NAME)

CFLAGS = -arch x86_64 \
	 -fPIC \
         -Werror=implicit-function-declaration \
         -D_GNU_SOURCE \
         -DGST_REMOVE_DEPRECATED \
         -DGST_DISABLE_GST_DEBUG \
         -DGST_DISABLE_LOADSAVE \
         -DG_DISABLE_DEPRECATED \
         -DG_DISABLE_ASSERT \
         -DHAVE_CONFIG_H \
         -DGSTREAMER_LITE \
         -DGST_REMOVE_DISABLED \
         -DOSX \
         -msse2 \
         -mmacosx-version-min=10.7

ifeq ($(BUILD_TYPE), Release)
    CFLAGS += -Os
else
    CFLAGS += -O0 -g -Wall
endif

INCLUDES = $(addprefix -I$(SRCBASE_DIR)/,$(DIRLIST)) \
           -I$(BASE_DIR)/plugins/ \
           -I$(SRCBASE_DIR)/projects/plugins \
           -I$(SRCBASE_DIR)/gstreamer \
           -I$(SRCBASE_DIR)/gstreamer/libs \
           -I$(SRCBASE_DIR)/gst-plugins-base \
           -I$(SRCBASE_DIR)/gst-plugins-base/gst-libs \
           -I$(GLIB_DIR) \
           -I$(GLIB_DIR)/glib \
           -I$(GLIB_DIR)/gmodule \
           -I$(GLIB_DIR)/build/osx

LDFLAGS = -mmacosx-version-min=10.7 -arch x86_64 \
	  -L$(BUILD_DIR) -Wl,-install_name,@rpath/$(TARGET_NAME) -lglib-lite \
          -framework CoreAudio -framework AudioUnit -framework CoreServices

C_SOURCES = gstreamer/libs/gst/base/gstbytereader.c \
            gstreamer/gst/gst.c                                                \
            gstreamer/gst/gstbin.c                                             \
            gstreamer/gst/gstbuffer.c                                          \
            gstreamer/gst/gstbufferlist.c                                      \
            gstreamer/gst/gstbus.c                                             \
            gstreamer/gst/gstcaps.c                                            \
            gstreamer/gst/gstchildproxy.c                                      \
            gstreamer/gst/gstclock.c                                           \
            gstreamer/gst/gstdebugutils.c                                      \
            gstreamer/gst/gstelement.c                                         \
            gstreamer/gst/gstelementfactory.c                                  \
            gstreamer/gst/gsterror.c                                           \
            gstreamer/gst/gstevent.c                                           \
            gstreamer/gst/gstfilter.c                                          \
            gstreamer/gst/gstformat.c                                          \
            gstreamer/gst/gstghostpad.c                                        \
            gstreamer/gst/gstindex.c                                           \
            gstreamer/gst/gstindexfactory.c                                    \
            gstreamer/gst/gstinfo.c                                            \
            gstreamer/gst/gstinterface.c                                       \
            gstreamer/gst/gstiterator.c                                        \
            gstreamer/gst/gstmessage.c                                         \
            gstreamer/gst/gstminiobject.c                                      \
            gstreamer/gst/gstobject.c                                          \
            gstreamer/gst/gstpad.c                                             \
            gstreamer/gst/gstpadtemplate.c                                     \
            gstreamer/gst/gstparamspecs.c                                      \
            gstreamer/gst/gstpipeline.c                                        \
            gstreamer/gst/gstplugin.c                                          \
            gstreamer/gst/gstpluginfeature.c                                   \
            gstreamer/gst/gstpoll.c                                            \
            gstreamer/gst/gstpreset.c                                          \
            gstreamer/gst/gstquark.c                                           \
            gstreamer/gst/gstquery.c                                           \
            gstreamer/gst/gstregistry.c                                        \
            gstreamer/gst/gstregistrybinary.c                                  \
            gstreamer/gst/gstsegment.c                                         \
            gstreamer/gst/gststructure.c                                       \
            gstreamer/gst/gstsystemclock.c                                     \
            gstreamer/gst/gsttaglist.c                                         \
            gstreamer/gst/gsttagsetter.c                                       \
            gstreamer/gst/gsttask.c                                            \
            gstreamer/gst/gsttaskpool.c                                        \
            gstreamer/gst/gsttrace.c                                           \
            gstreamer/gst/gsttypefind.c                                        \
            gstreamer/gst/gsttypefindfactory.c                                 \
            gstreamer/gst/gsturi.c                                             \
            gstreamer/gst/gstutils.c                                           \
            gstreamer/gst/gstvalue.c                                           \
            gstreamer/libs/gst/base/gstadapter.c                               \
            gstreamer/libs/gst/base/gstbasesink.c                              \
            gstreamer/libs/gst/base/gstbasesrc.c                               \
            gstreamer/libs/gst/base/gstbasetransform.c                         \
            gstreamer/libs/gst/base/gstcollectpads.c                           \
            gstreamer/libs/gst/base/gstpushsrc.c                               \
            gstreamer/libs/gst/base/gsttypefindhelper.c                        \
            gstreamer/libs/gst/controller/gstcontroller.c                      \
            gstreamer/libs/gst/controller/gstcontrolsource.c                   \
            gstreamer/libs/gst/controller/gsthelper.c                          \
            gstreamer/libs/gst/controller/gstinterpolation.c                   \
            gstreamer/libs/gst/controller/gstinterpolationcontrolsource.c      \
            gstreamer/libs/gst/controller/gstlfocontrolsource.c                \
            gstreamer/libs/gst/controller/lib.c                                \
            gst-plugins-base/gst-libs/gst/audio/audio-enumtypes.c              \
            gst-plugins-base/gst-libs/gst/audio/audio.c                        \
            gst-plugins-base/gst-libs/gst/audio/gstaudioclock.c                \
            gst-plugins-base/gst-libs/gst/audio/gstaudiofilter.c               \
            gst-plugins-base/gst-libs/gst/audio/gstaudiosink.c                 \
            gst-plugins-base/gst-libs/gst/audio/gstaudiosrc.c                  \
            gst-plugins-base/gst-libs/gst/audio/gstbaseaudiosink.c             \
            gst-plugins-base/gst-libs/gst/audio/gstbaseaudiosrc.c              \
            gst-plugins-base/gst-libs/gst/audio/gstringbuffer.c                \
            gst-plugins-base/gst-libs/gst/audio/mixerutils.c                   \
            gst-plugins-base/gst-libs/gst/audio/multichannel.c                 \
            gst-plugins-base/gst-libs/gst/interfaces/interfaces-enumtypes.c    \
            gst-plugins-base/gst-libs/gst/interfaces/interfaces-marshal.c      \
            gst-plugins-base/gst-libs/gst/interfaces/mixer.c                   \
            gst-plugins-base/gst-libs/gst/interfaces/mixeroptions.c            \
            gst-plugins-base/gst-libs/gst/interfaces/mixertrack.c              \
            gst-plugins-base/gst-libs/gst/interfaces/navigation.c              \
            gst-plugins-base/gst-libs/gst/interfaces/propertyprobe.c           \
            gst-plugins-base/gst-libs/gst/interfaces/videoorientation.c        \
            gst-plugins-base/gst-libs/gst/interfaces/xoverlay.c                \
            gst-plugins-base/gst-libs/gst/video/gstvideofilter.c               \
            gst-plugins-base/gst-libs/gst/video/gstvideosink.c                 \
            gst-plugins-base/gst-libs/gst/video/video-enumtypes.c              \
            gst-plugins-base/gst-libs/gst/video/video.c                        \
            gst-plugins-base/gst-libs/gst/pbutils/descriptions.c               \
            gst-plugins-base/gst-libs/gst/pbutils/missing-plugins.c            \
            gst-plugins-base/gst-libs/gst/pbutils/pbutils-enumtypes.c          \
            gst-plugins-base/gst-libs/gst/pbutils/pbutils.c                    \
            gst-plugins-base/gst-libs/gst/tag/gstid3tag.c                      \
            gst-plugins-base/gst-libs/gst/tag/gsttagdemux.c                    \
            gst-plugins-base/gst-libs/gst/tag/gstvorbistag.c                   \
            gst-plugins-base/gst-libs/gst/tag/tags.c                           \
            gst-plugins-base/gst-libs/gst/riff/riff-media.c                    \
            gst-plugins-base/gst-libs/gst/riff/riff-read.c                     \
            gst-plugins-base/gst-libs/gst/riff/riff.c                          \
            gst-plugins-base/gst-libs/gst/app/gstappbuffer.c                   \
            gst-plugins-base/gst-libs/gst/app/gstappsink.c                     \
            gst-plugins-base/gst-libs/gst/fft/gstfft.c                         \
            gst-plugins-base/gst-libs/gst/fft/gstfftf32.c                      \
            gst-plugins-base/gst-libs/gst/fft/gstfftf64.c                      \
            gst-plugins-base/gst-libs/gst/fft/gstffts16.c                      \
            gst-plugins-base/gst-libs/gst/fft/gstffts32.c                      \
            gst-plugins-base/gst-libs/gst/fft/kiss_fft_f32.c                   \
            gst-plugins-base/gst-libs/gst/fft/kiss_fft_f64.c                   \
            gst-plugins-base/gst-libs/gst/fft/kiss_fft_s16.c                   \
            gst-plugins-base/gst-libs/gst/fft/kiss_fft_s32.c                   \
            gst-plugins-base/gst-libs/gst/fft/kiss_fftr_f32.c                  \
            gst-plugins-base/gst-libs/gst/fft/kiss_fftr_f64.c                  \
            gst-plugins-base/gst-libs/gst/fft/kiss_fftr_s16.c                  \
            gst-plugins-base/gst-libs/gst/fft/kiss_fftr_s32.c                  \
            gstreamer/libs/gst/base/gstbaseparse.c                             \
            gstreamer/gst/gstdatetime.c                                        \
            gstreamer/gst/gstenumtypes.c                                       \
            gstreamer/gst/gstmarshal.c                                         \
            gstreamer/gst/gstparse.c                                           \
            gstreamer/gst/gstpluginloader.c                                    \
            gstreamer/gst/gstregistrychunks.c                                  \
            gst-plugins-base/gst-libs/gst/pbutils/codec-utils.c                \
            gst-plugins-base/gst-libs/gst/tag/gstxmptag.c                      \
            gstreamer/libs/gst/base/gstbytewriter.c                            \
            gst-plugins-base/gst-libs/gst/tag/lang.c                           \
            gst-plugins-base/gst-libs/gst/tag/gsttageditingprivate.c           \
            gstreamer/plugins/elements/gstcapsfilter.c \
            gstreamer/plugins/elements/gstelements.c                           \
            gstreamer/plugins/elements/gstfilesrc.c                            \
            gstreamer/plugins/elements/gstqueue.c                              \
            gstreamer/plugins/elements/gsttypefindelement.c                    \
            gst-plugins-base/gst/typefind/gsttypefindfunctions.c               \
            gst-plugins-base/gst/audioconvert/audioconvert.c                   \
            gst-plugins-base/gst/audioconvert/gstaudioconvert.c                \
            gst-plugins-base/gst/audioconvert/gstaudioquantize.c               \
            gst-plugins-base/gst/audioconvert/gstchannelmix.c                  \
            gst-plugins-base/gst/audioconvert/plugin.c                         \
            gst-plugins-good/sys/osxaudio/gstosxaudio.c                        \
            gst-plugins-good/sys/osxaudio/gstosxaudioelement.c                 \
            gst-plugins-good/sys/osxaudio/gstosxaudiosink.c                    \
            gst-plugins-good/sys/osxaudio/gstosxringbuffer.c                   \
            gst-plugins-good/gst/audiofx/audiofx.c                             \
            gst-plugins-good/gst/audiofx/audiopanorama.c                       \
            gst-plugins-good/gst/equalizer/gstiirequalizer.c                   \
            gst-plugins-good/gst/equalizer/gstiirequalizernbands.c             \
            gst-plugins-good/gst/wavparse/gstwavparse.c                        \
            projects/plugins/gstplugins-lite.c                                 \
            gst-plugins-base/gst/app/gstapp.c                                  \
            gst-plugins-good/sys/osxaudio/gstosxaudiosrc.c                     \
            gst-plugins-good/gst/spectrum/gstspectrum.c                        \
            gst-plugins-good/gst/audioparsers/parsersplugin.c                  \
            gst-plugins-good/gst/audioparsers/gstmpegaudioparse.c              \
            gst-plugins-good/gst/isomp4/qtdemux_lang.c                         \
            gst-plugins-good/gst/isomp4/isomp4-plugin.c                        \
            gst-plugins-good/gst/isomp4/qtdemux_dump.c                         \
            gst-plugins-good/gst/isomp4/qtdemux_types.c                        \
            gst-plugins-good/gst/isomp4/qtdemux.c                              \
            gst-plugins-bad/gst/aiff/aiff.c                                    \
            gst-plugins-bad/gst/aiff/aiffparse.c                               \
            gst-plugins-base/gst/audioconvert/gstaudioconvertorc-dist.c

OBJ_DIRS = $(addprefix $(OBJBASE_DIR)/,$(DIRLIST))
OBJECTS  = $(patsubst %.c,$(OBJBASE_DIR)/%.o,$(C_SOURCES))

.PHONY: default list

default: $(TARGET)

$(OBJBASE_DIR)/%.o: $(SRCBASE_DIR)/%.c
	$(CC) $(CFLAGS) -I$(SRCBASE_DIR)/projects/build/osx/common/x86_64 $(INCLUDES) -c $< -o $@

$(OBJECTS): | $(OBJ_DIRS) $(TARGET_DIRS)

$(OBJ_DIRS):
	mkdir -p $(OBJ_DIRS)

$(TARGET_DIRS):
	mkdir -p $(TARGET_DIRS)

$(TARGET): $(OBJECTS)
	$(CC) -dynamiclib $(OBJECTS) $(LDFLAGS) -o $@
