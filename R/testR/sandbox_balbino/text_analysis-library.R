rm(list = ls())


getwd()


# unnets-tokens


text <- c("Because I could not stop for Death -",
          "He kindly stopped for me -",
          "The Carriage held but just Ourselves -",
          "and Immortality")

text_df <- tibble(line = 1:4, text = text)

